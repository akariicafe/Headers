@class ACHEarnedInstanceEntityWrapper, HDProfile, ACHTemplateEntityWrapper, NSString, AAPTriggerGenerator, NSObject;
@protocol OS_dispatch_queue;

@interface ACHAwardsProfileExtension : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver, ACHTemplateEntitySyncedTemplatesObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileExtension, ACHAwardsProfileExtending>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHEarnedInstanceEntityWrapper *earnedInstanceEntityWrapper;
@property (retain, nonatomic) ACHTemplateEntityWrapper *templateEntityWrapper;
@property (retain, nonatomic) AAPTriggerGenerator *triggerGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)a0 removedEarnedInstances:(id)a1;
- (void)templateEntityDidReceiveSyncedTemplates:(id)a0 provenance:(long long)a1;
- (void)keyValuePairsDidUpdate:(id)a0;
- (BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)a0 provenance:(long long)a1;
- (void).cxx_destruct;

@end
