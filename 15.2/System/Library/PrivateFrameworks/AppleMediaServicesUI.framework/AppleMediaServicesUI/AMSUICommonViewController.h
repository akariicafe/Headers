@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;

- (void)loadView;
- (void)setChildViewController:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)unsetChildViewController:(id)a0;

@end
