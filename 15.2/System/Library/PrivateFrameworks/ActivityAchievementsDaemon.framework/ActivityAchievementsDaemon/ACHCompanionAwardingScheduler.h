@class HDProfile, HDPeriodicActivity, NSDate, NSObject, ACHEarnedInstanceAwardingEngine, HDKeyValueDomain, NSMutableArray, NSCalendar, _HKDelayedOperation, ACHDataStore, NSString, HDMaintenanceOperation, NSNumber, ACHTemplateStore, ACHEarnedInstanceStore;
@protocol OS_dispatch_queue;

@interface ACHCompanionAwardingScheduler : NSObject <HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler>

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHDataStore *dataStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine;
@property (retain, nonatomic) HDPeriodicActivity *scheduler;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL shouldRetryEarnedInstanceDeletion;
@property (retain, nonatomic) NSNumber *forceActivityAppInstalled;
@property (retain, nonatomic) _HKDelayedOperation *operation;
@property (retain, nonatomic) NSMutableArray *awardEvaluationCompletionBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *awardingEvaluationQueue;
@property (retain, nonatomic) NSNumber *coalescingDelayOverride;
@property (retain, nonatomic) HDKeyValueDomain *localKeyValueDomain;
@property (retain, nonatomic) NSDate *lastSuccessfulRunDate;
@property (retain, nonatomic) HDMaintenanceOperation *maintenanceOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticDescription;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_applicationsUninstalled:(id)a0;
- (void).cxx_destruct;
- (void)_systemTimeZoneDidChange:(id)a0;
- (void)_applicationsInstalled:(id)a0;
- (void)templateStore:(id)a0 didAddNewTemplates:(id)a1;
- (void)templateStore:(id)a0 didRemoveTemplates:(id)a1;
- (void)templateStoreDidFinishInitialFetch:(id)a0;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)a0;
- (BOOL)_userInfoContainsCompanionActivityBundleID:(id)a0;
- (void)_queue_removeAllEarnedInstances;
- (BOOL)_shouldRunImmediatelyOnTemplateLoad;
- (void)scheduleMaintenanceTaskForAwardingWithCompletion:(id /* block */)a0;
- (void)_queue_addAwardingCompletion:(id /* block */)a0;
- (void)_queue_requestAwardingEvaluation;
- (void)_queue_removeMaintenanceOperation;
- (void)setlastSuccessfulRunDate:(id)a0;
- (void)_queue_callAwardingCompletionsWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_didRunToday;
- (void)_queue_performCleanupTasks;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 earnedInstanceStore:(id)a2 templateStore:(id)a3 awardingEngine:(id)a4;
- (void)clearLastSuccessfulRunDate;
- (void)shouldForceActivityAppInstalled:(BOOL)a0;
- (void)overrideCoalescingDelay:(double)a0;
- (void)addAwardingCompletion:(id /* block */)a0;

@end
