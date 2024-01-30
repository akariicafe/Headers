@class CKVTaskCoalescenceManager, NSString, CKVIndexManager, CKVSettings, NSObject;
@protocol CKVDonateTaskProvider;

@interface CKVTaskHandler : NSObject {
    NSString *_handlerName;
    CKVSettings *_settings;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVTaskCoalescenceManager *_coalescenceManager;
    CKVIndexManager *_indexManager;
    BOOL _isAdmin;
}

+ (id)dailyDonateTasks;
+ (id)localizedDonateTasks;
+ (id)migrationDonateTasks;
+ (id)verificationTasks;

- (id /* block */)_taskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id /* block */)_destroyAllStateTaskBlockWithReason:(unsigned short)a0;
- (id)_deletedItemIdsWithDatabaseSearcher:(id)a0;
- (id /* block */)_maintenanceTaskBlockWithReason:(unsigned short)a0;
- (void)_runMigration:(unsigned short)a0 completion:(id /* block */)a1;
- (BOOL)_didEnablementOptionsChange:(BOOL *)a0;
- (id)_enabledDerivativeTasksForTask:(id)a0;
- (BOOL)_didLocalizationChange:(unsigned short)a0 isMaintenance:(BOOL)a1;
- (void)_submitTask:(unsigned short)a0 reason:(unsigned short)a1 taskBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id /* block */)_verificationTaskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id /* block */)_siriSettingsChangedTaskBlockWithReason:(unsigned short)a0;
- (void)enableSimulatedTasks:(BOOL)a0;
- (id)initWithHandlerName:(id)a0 settings:(id)a1 donateTaskProvider:(id)a2 coalescenceManager:(id)a3 indexManager:(id)a4 isAdmin:(BOOL)a5;
- (id /* block */)_executeTaskBlock:(id /* block */)a0 ifTaskEnabled:(unsigned short)a1;
- (id /* block */)_siriLanguageChangedTaskBlockWithReason:(unsigned short)a0;
- (id /* block */)_assetUpdateTaskBlockWithReason:(unsigned short)a0;
- (BOOL)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
