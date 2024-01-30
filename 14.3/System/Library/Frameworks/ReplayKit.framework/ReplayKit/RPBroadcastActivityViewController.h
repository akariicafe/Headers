@class RPBroadcastActivityHostViewController, UIPopoverPresentationController;
@protocol RPBroadcastActivityViewControllerDelegate;

@interface RPBroadcastActivityViewController : UIViewController

@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationControllerProxy;
@property (retain, nonatomic) RPBroadcastActivityHostViewController *hostViewController;
@property (copy, nonatomic) id /* block */ didFinishHandler;
@property (weak, nonatomic) id<RPBroadcastActivityViewControllerDelegate> delegate;

+ (void)viewControllerForExtension:(id)a0 inputItems:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)a0 handler:(id /* block */)a1 broadcastActivitiesNotInstalledAlertTitle:(id)a2 broadcastActivitiesNotInstalledAlertMessage:(id)a3 atPoint:(struct CGPoint { double x0; double x1; })a4 fromWindow:(id)a5;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)a0 handler:(id /* block */)a1;
+ (void)loadBroadcastActivityViewControllerWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)popoverPresentationController;
- (void)setModalPresentationStyle:(long long)a0;
- (void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;

@end
