@class NSString, HDProfile, ACHDataStore, NSSet, NSObject, ACHEarnedInstanceAwardingEngine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACHGizmoAwardingScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, ACHAwardingScheduler, ACHDataStoreObserving> {
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    NSSet *_blocksWaitingOnFirstEvaluation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _needsRetry;
    BOOL _firstEvaluationComplete;
    BOOL _dataStoreHasPopulated;
}

@property (nonatomic) double retryInterval;
@property (nonatomic) double retryLeeway;
@property (copy, nonatomic) id /* block */ scheduledEvaluationCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (id)diagnosticDescription;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_requestRetryingAwardingEvaluationWithCompletion:(id /* block */)a0;
- (void)_queue_cancelRetryAwardingEvaluationTimer;
- (void)_queue_scheduleRetryAwardingEvaluation;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)a0;
- (void)dataStoreDidPopulate:(id)a0;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 awardingEngine:(id)a2;
- (void)performAfterFirstEvaluation:(id /* block */)a0;

@end
