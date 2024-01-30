@class NSString, SNTestSuite;
@protocol SNTestCase;

@interface SNTestRun : NSObject <SNTestRunOptions>

@property (readonly, nonatomic) id<SNTestCase> testCase;
@property (readonly, nonatomic) SNTestSuite *testSuite;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL waitForCommitToFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTestCase:(id)a0 testSuite:(id)a1;
- (void)runTestWithContext:(id)a0 testName:(id)a1 testCoordinator:(id)a2 completion:(id /* block */)a3;
- (void)runTestWithContext:(id)a0 testCoordinator:(id)a1 completion:(id /* block */)a2;
- (void)setupWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
