@class HDPeriodicActivity, NSString, HDProfile, HDAssertion, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate> {
    NSString *_waitingToRunKey;
    NSString *_lastSubmissionAttemptKey;
    NSString *_intervalCounterKey;
    NSString *_lastProcessedDateKey;
    long long _repeatInterval;
    long long _graceInterval;
    BOOL _requiresClassB;
    long long _intervalMultiple;
    long long _maximumAttemptCount;
    double _minimumDelayBetweenAttempts;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    id /* block */ _block;
    HDPeriodicActivity *_periodicActivity;
    NSDate *_lastSubmissionAttemptDate;
    long long _intervalCounter;
    NSDate *_lastProcessedDate;
}

@property (readonly, nonatomic) long long waitingToRun;
@property (readonly, nonatomic) NSDate *lastSubmissionAttemptDate;
@property (readonly, nonatomic) NSDate *lastProcessedDate;
@property (readonly, nonatomic) long long intervalCounter;
@property (readonly, copy, nonatomic) NSString *taskName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_queue_registerActivity;
- (BOOL)_runBlockWithAccessibilityAssertion:(id)a0 error:(id *)a1;
- (void)_beginWaitingToRun;
- (void)reset;
- (void)dealloc;
- (BOOL)doIfWaitingWithError:(id *)a0;
- (void)stop;
- (void)_queue_setLastSubmissionAttemptDate:(id)a0;
- (BOOL)_queue_shouldAttemptToSubmit;
- (void)_queue_setIntervalCounter:(long long)a0;
- (void)start;
- (void)doIfWaitingOnMaintenanceQueueWithCompletion:(id /* block */)a0;
- (BOOL)doForced;
- (void)_queue_prepareAccessibilityAssertionIfNeeded;
- (void)_queue_setLastProcessedDate:(id)a0;
- (void)_queue_setWaitingToRun:(long long)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)setLastProcessedDate:(id)a0;
- (id)initWithTaskName:(id)a0 keyPrefix:(id)a1 xpcInterval:(long long)a2 xpcGraceInterval:(long long)a3 requiresClassB:(BOOL)a4 intervalMultiple:(long long)a5 maximumAttemptCount:(long long)a6 minimumDelayBetweenAttempts:(double)a7 profile:(id)a8 block:(id /* block */)a9;
- (void)_loadState;

@end
