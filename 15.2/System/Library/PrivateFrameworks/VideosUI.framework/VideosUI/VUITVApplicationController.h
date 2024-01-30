@class NSDate, VUIAppContext, NSString, UINavigationController, UIWindow, NSDictionary, UIViewController, VUITVApplicationControllerContext, _VUICoreApplication;
@protocol UITraitEnvironment, VUITVApplicationControllerDelegate, VUITVAppRootViewController;

@interface VUITVApplicationController : NSObject <VUIAppContextDelegate> {
    _VUICoreApplication *_application;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    BOOL _suspended;
    BOOL _reloadInProgress;
    BOOL _reloadOnResume;
    double _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    BOOL _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    BOOL _popViewControllerOnBackground;
    UIViewController<VUITVAppRootViewController> *_appRootViewController;
    long long _interfaceOrientation;
}

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) VUITVApplicationControllerContext *context;
@property (readonly, weak, nonatomic) id<VUITVApplicationControllerDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) VUIAppContext *appContext;
@property (weak, nonatomic) id<UITraitEnvironment> keyTraitEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_jsLaunchOptionsWithApplicationOptions:(id)a0;

- (id)rootViewController;
- (void)reload;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (id)_rootViewController;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)applicationWillSuspend:(id)a0;
- (void)_statusBarOrientationDidChange:(id)a0;
- (void)dealloc;
- (void)registerForApplicationNotifications;
- (void)stop;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (id)initWithContext:(id)a0 window:(id)a1 delegate:(id)a2;
- (void)_launchApp;
- (id)_currentNavigationController;
- (void)_openURLControllerDidDisplay:(id)a0;
- (void)_applicationWillTerminateNotification:(id)a0;
- (void)applicationDidResume:(id)a0;
- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (BOOL)_hasReloadOnResumeMinIntervalPassed;
- (void)_reloadControllerDidDisplay:(id)a0;
- (BOOL)_shouldReloadOnResume;
- (void)_openURLControllerHandler:(BOOL)a0;
- (void)appContext:(id)a0 scriptForURL:(id)a1 cachePolicy:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (BOOL)openURL:(id)a0 options:(id)a1;
- (void)evaluateInJavaScriptContext:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)a0;

@end
