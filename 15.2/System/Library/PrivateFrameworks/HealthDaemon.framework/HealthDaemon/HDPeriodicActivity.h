@class NSString, HDProfile, NSObject;
@protocol OS_os_log, HDPeriodicActivityDelegate, OS_xpc_object;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lastSuccessfulRunDateUserDefaultsKey;
    id /* block */ _waitingActivityCompletion;
    NSString *_errorCountUserDefaultsKey;
    NSString *_minimumIntervalDefaultsKey;
    BOOL _unitTest_shouldDeferOverride;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly, nonatomic) double interval;
@property (readonly, weak, nonatomic) id<HDPeriodicActivityDelegate> delegate;
@property (readonly, nonatomic) long long errorCount;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly) NSObject<OS_xpc_object> *currentActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivityWithName:(id)a0 loggingCategory:(id)a1;

- (id)diagnosticDescription;
- (id)lastSuccessfulRunDate;
- (void)resetInterval;
- (void)updateCriteria;
- (id)initWithProfile:(id)a0 name:(id)a1 interval:(double)a2 delegate:(id)a3 loggingCategory:(id)a4;
- (id)currentCriteria;
- (void)unitTest_setShouldDefer:(BOOL)a0;
- (void)didPerformActivityWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonActivated:(id)a0;
- (BOOL)isWaitingToRun;
- (void)synthesizeActivityFire;
- (void)dealloc;
- (void)reset;

@end
