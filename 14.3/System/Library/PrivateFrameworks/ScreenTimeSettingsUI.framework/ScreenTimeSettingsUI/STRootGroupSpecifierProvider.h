@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)a0;

- (void).cxx_destruct;
- (void)invalidate;

@end
