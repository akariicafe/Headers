@class NSString, SCLSuppressSchoolModeAssertionManager, SCLSchedulingEngine, NSHashTable, NSObject, SCLState;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCLSchoolModeServer : NSObject <SCLSchedulingEngineDelegate, SCLSuppressSchoolModeAssertionManagerObserver>

@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic) int timeChangeToken;
@property (retain) SCLSchedulingEngine *schedulingEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (readonly) SCLState *currentState;
@property (readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *suppressionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_scheduleTimerForDate:(id)a0;
- (void)handleLocaleChange;
- (void)handleSignificantTimeChange;
- (void)timerFired;
- (void)invalidate;
- (void)schedulingEngine:(id)a0 didUpdateState:(id)a1 fromState:(id)a2 nextEvaluationDate:(id)a3;
- (void)configureParameters:(id)a0 forSuppressionStatus:(unsigned long long)a1;
- (void)assertionManager:(id)a0 didUpdateAssertionsStatus:(unsigned long long)a1;
- (id)initWithQueue:(id)a0 suppressionManager:(id)a1;
- (void)startWithScheduleSettings:(id)a0 shouldStartManuallyActive:(BOOL)a1;
- (void)applySchedule:(id)a0;

@end
