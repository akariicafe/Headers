@class UIApplication, SNTestStore, NSString;
@protocol SNTestCoordinating;

@interface SNTestRunner : NSObject <SNTestRunner>

@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) id<SNTestCoordinating> testCoordinator;
@property (readonly, nonatomic) SNTestStore *testStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runTest:(id)a0 options:(id)a1;
- (BOOL)runExtendedLaunchTest;
- (void).cxx_destruct;
- (BOOL)runTestRun:(id)a0 testName:(id)a1 options:(id)a2 fallingBackWith:(id /* block */)a3;
- (BOOL)runTest:(id)a0 options:(id)a1 fallingBackWith:(id /* block */)a2;
- (id)initWithApplication:(id)a0 testCoordinator:(id)a1 testStore:(id)a2;

@end
