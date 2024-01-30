@class WFDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonDatabaseProvider : NSObject <VCDatabaseProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShortcutsAppInstalled;
- (id)init;
- (void).cxx_destruct;
- (id)databaseWithError:(id *)a0;
- (void)migrateVoiceShortcutsToShortcutsInDatabase:(id)a0;
- (BOOL)migrateDatabasesToShortcutsFolderIfNeeded;

@end
