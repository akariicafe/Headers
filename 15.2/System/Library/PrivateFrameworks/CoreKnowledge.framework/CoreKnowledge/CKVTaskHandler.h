@class CKVTaskCoalescenceManager, NSString, CKVTaskController, CKVIndexManager, CKVSettings, NSObject;
@protocol CKVDonateTaskProvider;

@interface CKVTaskHandler : NSObject {
    NSString *_handlerName;
    CKVSettings *_settings;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVTaskCoalescenceManager *_coalescenceManager;
    CKVIndexManager *_indexManager;
}

@property (readonly, nonatomic) CKVTaskController *taskController;

- (void)runMigration:(id /* block */)a0;
- (void)_clearAllDisabledDatasetsWithReason:(unsigned short)a0;
- (void)handleAddressBookChange:(id /* block */)a0;
- (void)_runMigration:(id /* block */)a0;
- (void)handleINVocabularyChange:(id /* block */)a0;
- (void)_donateContactsIfEnabled:(unsigned short)a0 completion:(id /* block */)a1;
- (id)initWithHandlerName:(id)a0 settings:(id)a1 donateTaskProvider:(id)a2 coalescenceManager:(id)a3 indexManager:(id)a4 taskController:(id)a5;
- (void)_donateCustomVocabularyIfEnabled:(unsigned short)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleMediaPlayerChange:(id /* block */)a0;
- (void)runIndexMaintenance:(id /* block */)a0;
- (void)enableSimulatedTasks:(BOOL)a0;
- (void)_donateHomeKitIfEnabled:(unsigned short)a0 completion:(id /* block */)a1;
- (void)_submitTask:(unsigned short)a0 reason:(unsigned short)a1 taskBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_donateAppInfoIfEnabled:(unsigned short)a0 completion:(id /* block */)a1;
- (void)handleHomeKitChange:(id /* block */)a0;
- (void)handleLSApplicationChange:(id /* block */)a0;
- (void)handleSiriLanguageCodeChange:(id /* block */)a0;
- (void)handleSiriSettingsChange:(id /* block */)a0;
- (void)_donateMediaIfEnabled:(unsigned short)a0 completion:(id /* block */)a1;
- (void)_donateAllDatasetsWithReason:(unsigned short)a0 completion:(id /* block */)a1;

@end
