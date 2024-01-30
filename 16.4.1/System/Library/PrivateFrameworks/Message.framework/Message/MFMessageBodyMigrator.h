@class EFLazyCache, MFMailMessageLibrary, NSString, NSObject, NSMutableArray;
@protocol OS_os_log, EFScheduler;

@interface MFMessageBodyMigrator : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _upgradeLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EFLazyCache *directoryContentCache;
@property (retain, nonatomic) id<EFScheduler> backgroundMigrationScheduler;
@property (retain, nonatomic) NSMutableArray *mailboxesToCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_directoryContentsForPath:(id)a0;
- (id)_filesForMessage:(id)a0;
- (id)_legacyAttachmentDataDirectoryURLForGlobalMessageID:(long long)a0 basePath:(id)a1 purgeable:(BOOL)a2;
- (BOOL)_mailboxHasUnmigratedFiles:(id)a0;
- (void)_migrateAllFilesForMailbox:(id)a0;
- (void)_migrateDataFilesForMessage:(id)a0;
- (id)legacyAttachmentDirectoryForMessage:(id)a0;
- (void)migrateBodyForMessageIfNecessary:(id)a0;
- (void)startMigratingBodies;

@end
