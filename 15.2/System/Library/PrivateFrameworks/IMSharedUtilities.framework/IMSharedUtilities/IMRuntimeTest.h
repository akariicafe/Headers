@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) id /* block */ completion;

+ (id)testName;
+ (id)logHandle;
+ (void)testLog:(id)a0;

- (id)testName;
- (void)tearDown;
- (void)dispatchAfter:(double)a0 block:(id /* block */)a1;
- (id)logHandle;
- (void)testLog:(id)a0;
- (void)setUp;
- (void)runTest:(id /* block */)a0;
- (void).cxx_destruct;
- (Class)testRunClass;
- (void)finishTest;
- (void)finishTestAfterInterval:(double)a0;
- (void)startTest;

@end
