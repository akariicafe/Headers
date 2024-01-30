@class UINavigationController, VUIAppContext;

@interface VUIGDPRPresentationManager : NSObject

@property (retain, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) VUIAppContext *appContext;

+ (id)_sharedInstance;
+ (void)acceptGDPRAndSyncWithServers:(id /* block */)a0;
+ (BOOL)shouldShowWelcomeScreen;
+ (BOOL)showGDPRWelcomeScreen:(id)a0;
+ (void)showOfflineGDPRWelcomeScreen;

- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)accept:(id)a0;
- (id)_currentWindowRootViewController;
- (void)_dismissAllModalsIfPresent:(id)a0;
- (void)_handleContinueButton;
- (void)_handleOfflineContinueButton;
- (void)_showIOSWelcomeControllerWithAppContext:(id)a0 offline:(BOOL)a1;

@end
