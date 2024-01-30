@class HDPeriodicActivity, NSString, HDProfile, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CHCoachingDiagnosticManager : NSObject <HDPeriodicActivityDelegate, HDDiagnosticObject, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_scheduler;
    NSDate *_cachedLastSubmittedDate;
    long long _lastRingCompletionSubmittedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)_queue_setLastSubmittedDate:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)diagnosticDescription;
- (void)dealloc;
- (BOOL)_queue_performRingCompletionDiagnostics;
- (id)_queue_lastSubmittedDate;
- (long long)_queue_lastRingCompletionSubmittedIndex;
- (void)_queue_setLastRingCompletionSubmittedIndex:(long long)a0;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void).cxx_destruct;

@end
