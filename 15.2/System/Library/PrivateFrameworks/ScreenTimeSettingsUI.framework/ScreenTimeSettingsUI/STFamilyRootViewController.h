@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STFamilyRootViewController : STListViewController

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic) BOOL presentedAsModal;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModalPresentation:(BOOL)a0;

@end
