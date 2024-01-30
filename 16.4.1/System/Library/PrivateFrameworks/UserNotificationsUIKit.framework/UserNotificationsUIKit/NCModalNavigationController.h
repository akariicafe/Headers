@protocol NCModalNavigationControllerDelegate;

@interface NCModalNavigationController : UINavigationController

@property (weak, nonatomic) id<NCModalNavigationControllerDelegate> presenterDelegate;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
