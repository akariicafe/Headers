@class NSString;

@interface CAMPerformanceTestHarness : NSObject

@property (readonly, copy, nonatomic) NSString *testName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest;

- (void).cxx_destruct;
- (void)stopTesting;
- (void)startTesting;
- (void)failedTestwithReason:(id)a0;
- (void)startSubtestWithName:(id)a0;
- (void)stopSubtestWithName:(id)a0;
- (id)initWithTestName:(id)a0;

@end
