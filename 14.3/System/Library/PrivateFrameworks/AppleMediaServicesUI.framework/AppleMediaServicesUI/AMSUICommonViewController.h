@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;

- (id)init;
- (void)_unregisterNotifications;
- (void)dealloc;
- (void)loadView;
- (void)setChildViewController:(id)a0;
- (void)_registerNotifications;
- (void)unsetChildViewController:(id)a0;

@end
