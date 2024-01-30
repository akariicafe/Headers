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

@end
