@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STFamilyRootViewController : STListViewController

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

- (id)init;
- (void).cxx_destruct;

@end
