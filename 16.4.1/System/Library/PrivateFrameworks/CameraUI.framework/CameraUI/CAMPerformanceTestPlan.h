@class NSString, NSMutableArray;

@interface CAMPerformanceTestPlan : NSObject <CAMPerformanceTestHarnessDelegate>

@property (retain, nonatomic) NSMutableArray *_harnesses;
@property (nonatomic) unsigned long long _completedHarnesses;
@property (nonatomic) unsigned long long _startedHarnesses;
@property (nonatomic) BOOL _hasTriggeredTestStart;
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest;
@property (copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) NSString *testName;
@property (nonatomic) unsigned int settlingDelaySeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (void)_failedTestWithReason:(id)a0;
- (id)_findHarnessAfter:(id)a0;
- (void)_runHarnessAfter:(id)a0;
- (void)_startTesting;
- (void)_stopTesting;
- (void)didFailTestHarness:(id)a0 withReason:(id)a1;
- (void)didStartSubtest:(id)a0 withName:(id)a1 withMetrics:(id)a2;
- (void)didStopSubtest:(id)a0 withName:(id)a1;
- (id)initWithTestName:(id)a0;
- (void)queueHarness:(id)a0;
- (void)runHarness:(id)a0;
- (void)runWithSecondsDelay:(unsigned long long)a0;
- (void)startSubtestWithName:(id)a0 withMetrics:(id)a1;
- (void)stopSubtestWithName:(id)a0;
- (void)willEndTestHarness:(id)a0;
- (void)willStartTestHarness:(id)a0;

@end
