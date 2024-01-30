@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)a0;

- (void).cxx_destruct;
- (void)invalidate;

@end
