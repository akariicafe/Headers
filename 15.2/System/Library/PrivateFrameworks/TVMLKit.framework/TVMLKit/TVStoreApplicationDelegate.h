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

- (void)applicationDidEnterBackground:(id)a0;
- (void)reload;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (void)appController:(id)a0 didFailWithError:(id)a1;
- (void)_launchApp;
- (id)bagBootURLKey;
- (id)offlineJSURL;
- (void)didShowViewController;
- (void)updateIdleModeVisualEffectsStatus:(BOOL)a0;
- (void)_controllerDidDisplay:(id)a0;
- (void)_presetDialogWithError:(long long)a0 appController:(id)a1;
- (BOOL)shouldBeForcedLeftToRight;
- (id)bootURL;
- (id)_bagBootURL;
- (void)_loadWithBootURL:(id)a0;
- (void)setupWithBootURL:(id)a0;
- (id)appLocalBootURL;
- (id)cachedBagPath;

@end
