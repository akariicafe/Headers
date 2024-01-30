@class UIWindow, TVApplicationController, NSString, TVStoreApplicationSetupHelper, NSDictionary, IKURLBagCache, NSURL;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BOOL _shouldTerminateOnEnterBackground;
    BOOL _headLess;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) TVApplicationController *appController;
@property (readonly, nonatomic) IKURLBagCache *bagCache;
@property (readonly, nonatomic) BOOL supportsIdleModeVisualEffects;
@property (nonatomic) BOOL overrideOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)reload;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (void)_launchApp;
- (id)bagBootURLKey;
- (id)offlineJSURL;
- (void)appController:(id)a0 didFailWithError:(id)a1;
- (void)didShowViewController;
- (id)appLocalBootURL;
- (id)bootURL;
- (id)_bagBootURL;
- (void)_controllerDidDisplay:(id)a0;
- (void)_loadWithBootURL:(id)a0;
- (void)_presetDialogWithError:(long long)a0 appController:(id)a1;
- (id)cachedBagPath;
- (void)setupWithBootURL:(id)a0;
- (BOOL)shouldBeForcedLeftToRight;
- (void)updateIdleModeVisualEffectsStatus:(BOOL)a0;

@end
