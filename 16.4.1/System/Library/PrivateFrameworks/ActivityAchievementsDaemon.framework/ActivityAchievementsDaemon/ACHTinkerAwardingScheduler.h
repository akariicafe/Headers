@class HDProfile, HDPeriodicActivity, NSDate, NSObject, ACHEarnedInstanceAwardingEngine, ACHDatabaseAssertionClient, HKHealthStore, NSMutableArray, HKKeyValueDomain, HDKeyValueDomain, NSCalendar, ACHXPCScheduler, ACHDataStore, ACHAwardsKeyValueClient, _HKDelayedOperation, HDMaintenanceOperation, NSString, NSNumber, ACHTemplateStore, ACHEarnedInstanceStore;
@protocol OS_dispatch_queue;

@interface ACHTinkerAwardingScheduler : NSObject <HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHDataStore *dataStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine;
@property (retain, nonatomic) HDPeriodicActivity *scheduler;
@property (retain, nonatomic) ACHXPCScheduler *xpcScheduler;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL shouldRetryEarnedInstanceDeletion;
@property (retain, nonatomic) NSNumber *forceActivityAppInstalled;
@property (retain, nonatomic) _HKDelayedOperation *operation;
@property (retain, nonatomic) NSMutableArray *awardEvaluationCompletionBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *awardingEvaluationQueue;
@property (retain, nonatomic) NSNumber *coalescingDelayOverride;
@property (retain, nonatomic) HKKeyValueDomain *localKeyValueHSDomain;
@property (retain, nonatomic) HDKeyValueDomain *localKeyValueDomain;
@property (retain, nonatomic) NSDate *lastSuccessfulRunDate;
@property (retain, nonatomic) HDMaintenanceOperation *maintenanceOperation;
@property (nonatomic) BOOL maintenanceTaskScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_systemTimeZoneDidChange:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)clearLastSuccessfulRunDate;
- (void)_startUp;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 earnedInstanceStore:(id)a2 templateStore:(id)a3 awardingEngine:(id)a4;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)diagnosticDescription;
- (void)_queue_daemon_performCleanupTasks;
- (void)scheduleMaintenanceTaskForAwardingWithCompletion:(id /* block */)a0;
- (void)_queue_performCleanupTasks;
- (void)_queue_requestAwardingEvaluation;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)a0;
- (void)_client_scheduleMaintenanceTaskForAwardingWithCompletion:(id /* block */)a0;
- (void)_daemon_scheduleMaintenanceTaskForAwardingWithCompletion:(id /* block */)a0;
- (id)_lastSuccessfulRunDateKey;
- (BOOL)_shouldRunImmediatelyOnTemplateLoad;
- (void)setlastSuccessfulRunDate:(id)a0;
- (void)templateStore:(id)a0 didAddNewTemplates:(id)a1;
- (id)initWithHealthStore:(id)a0 assertionClient:(id)a1 dataStore:(id)a2 earnedInstanceStore:(id)a3 templateStore:(id)a4 awardingEngine:(id)a5;
- (BOOL)_didRunToday;
- (void)_queue_callAwardingCompletionsWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_queue_daemon_requestAwardingEvaluation;
- (void)_queue_client_performCleanupTasks;
- (void)_queue_removeMaintenanceOperation;
- (void)templateStoreDidFinishInitialFetch:(id)a0;
- (void)_queue_addAwardingCompletion:(id /* block */)a0;
- (void)addAwardingCompletion:(id /* block */)a0;
- (void)overrideCoalescingDelay:(double)a0;
- (void)_runXPCActivityWithCompletion:(id /* block */)a0;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void).cxx_destruct;
- (void)templateStore:(id)a0 didRemoveTemplates:(id)a1;
- (void)_queue_client_requestAwardingEvaluation;

@end
