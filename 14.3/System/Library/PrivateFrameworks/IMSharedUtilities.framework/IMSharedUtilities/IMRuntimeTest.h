@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) id /* block */ completion;

+ (id)testName;
+ (void)testLog:(id)a0;
+ (id)logHandle;

- (void)startTest;
- (id)testName;
- (void).cxx_destruct;
- (void)testLog:(id)a0;
- (void)finishTest;
- (Class)testRunClass;
- (void)runTest:(id /* block */)a0;
- (id)logHandle;
- (void)finishTestAfterInterval:(double)a0;
- (void)dispatchAfter:(double)a0 block:(id /* block */)a1;
- (void)tearDown;
- (void)setUp;

@end
