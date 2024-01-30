@class MFMailMessageLibrary, NSConditionLock, NSString, NSObject;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue;

@interface MFMessageAttachmentMigrator : NSObject <EFContentProtectionObserver, EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _upgradeLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) id<EFScheduler> backgroundMigrationScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSConditionLock *migrationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)migrateMaildropFileForMessage:(id)a0 mailDropMetadata:(id)a1;

- (id)initWithLibrary:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (BOOL)_isMigratingAttachmentsOnThread;
- (BOOL)_checkContentProtectionState;
- (BOOL)_messageHasAttachmentsToMigrate:(id)a0;
- (BOOL)_migrateAttachmentsForMessage:(id)a0 connection:(id)a1;
- (void)_setMigratingAttachmentsOnThread:(BOOL)a0;
- (void)migrateAttachmentsForMessageIfNecessary:(id)a0;
- (void)startMigratingAttachments;

@end
