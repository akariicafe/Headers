@class NSString;

@interface CAMPerformanceTestHarness : NSObject

@property (readonly, copy, nonatomic) NSString *testName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest;

- (void)failedTestwithReason:(id)a0;
- (void).cxx_destruct;
- (void)startTesting;
- (void)stopTesting;
- (void)startSubtestWithName:(id)a0;
- (void)stopSubtestWithName:(id)a0;
- (id)initWithTestName:(id)a0;

@end
