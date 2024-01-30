@class NSString, HDProfile, NSObject;
@protocol OS_xpc_object, OS_os_log, HDPeriodicActivityDelegate;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastSuccessfulRunDateUserDefaultsKey;
    id /* block */ _waitingActivityCompletion;
    NSString *_errorCountUserDefaultsKey;
    NSString *_minimumIntervalDefaultsKey;
    BOOL _unitTest_shouldDeferOverride;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly, nonatomic) double interval;
@property (readonly, weak, nonatomic) id<HDPeriodicActivityDelegate> delegate;
@property (readonly, nonatomic) long long errorCount;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivityWithName:(id)a0 loggingCategory:(id)a1;
+ (id)_userDefaultsKeyForName:(id)a0 key:(id)a1;

- (void)_registerActivityWithCriteria:(id)a0;
- (void)unitTest_setShouldDefer:(BOOL)a0;
- (void).cxx_destruct;
- (void)resetInterval;
- (void)_performActivityIfWaiting;
- (double)_lock_currentInterval;
- (void)reset;
- (void)_lock_activityFinishedWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;
- (BOOL)isWaitingToRun;
- (void)dealloc;
- (double)_currentInterval;
- (void)_handleXPCActivityCallback:(id)a0;
- (void)updateCriteria;
- (id)initWithProfile:(id)a0 name:(id)a1 interval:(double)a2 delegate:(id)a3 loggingCategory:(id)a4;
- (void)_lock_incrementErrorCount;
- (void)_lock_setLastSuccessfulRunDate:(id)a0;
- (BOOL)_requiresProtectedData;
- (void)_performActivityIfPossibleWithCompletion:(id /* block */)a0;
- (id)diagnosticDescription;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_updateCriteriaForActivity:(id)a0;
- (id)currentCriteria;
- (id)_dateForDefaultsKey:(id)a0;
- (void)_finishActivity:(id)a0 result:(long long)a1;
- (void)_performActivityWithCompletion:(id /* block */)a0;
- (void)_performActivity:(id)a0;
- (id)_criteriaForInterval:(double)a0;
- (id)lastSuccessfulRunDate;
- (void)_unitTest_activityFiredButRunDeclined;
- (void)daemonActivated:(id)a0;
- (long long)_lock_errorCount;
- (void)synthesizeActivityFire;
- (void)didPerformActivityWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;

@end
