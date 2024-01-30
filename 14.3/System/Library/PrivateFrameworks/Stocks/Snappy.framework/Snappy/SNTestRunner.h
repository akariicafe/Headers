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

- (void).cxx_destruct;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (id)initWithApplication:(id)a0 testCoordinator:(id)a1 testStore:(id)a2;

@end
