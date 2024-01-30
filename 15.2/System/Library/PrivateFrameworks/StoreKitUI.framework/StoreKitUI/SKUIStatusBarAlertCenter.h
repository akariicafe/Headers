@class NSString, _SKUIStatusBarAlertViewController, _SKUIClickThroughWindow;

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>

@property (readonly, nonatomic) _SKUIClickThroughWindow *window;
@property (readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController;
@property (nonatomic) double duration;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)showMessage:(id)a0 withStyle:(long long)a1 forDuration:(double)a2 actionBlock:(id /* block */)a3;
- (void)unscheduleDismiss;
- (void)scheduleDismiss;
- (void)statusBarAlertViewControllerWasTapped:(id)a0;

@end
