@class UINavigationController, VUIBootURLController, TVApplicationController, NSString;

@interface VUIApplicationViewController : UIViewController <TVApplicationControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) TVApplicationController *applicationController;
@property (retain, nonatomic) VUIBootURLController *bootURLController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (id)_launchOptions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_startApplicationControllerWithBootURL:(id)a0;
- (void)_exposeObjectsInJSContext:(id)a0;
- (id)_initialViewControllerWithAppContext:(id)a0;
- (Class)_applicationControllerClass;
- (void)appController:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)appController:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)appController:(id)a0 didFailWithError:(id)a1;

@end
