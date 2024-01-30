@class UIAlertController, UIWindow, UIWindowScene;

@interface MFAlertOverlayController : NSObject

@property (retain, nonatomic) UIWindow *overlayWindow;
@property (readonly, weak, nonatomic) UIWindowScene *scene;
@property (readonly, nonatomic) BOOL isPresentingAlert;
@property (readonly, nonatomic) UIAlertController *topmostPresentedAlert;

+ (id)log;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWindowScene:(id)a0;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_teardownOverlayWindow;
- (id)_topmostViewController;
- (void)_setupOverlayWindowWithScene:(id)a0;
- (void)_handlePresentationDismissalNotification:(id)a0;
- (id)_bottomPresentedAlert;

@end
