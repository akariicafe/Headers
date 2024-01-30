@class UINavigationController, IKAppContext;

@interface VUIGDPRPresentationManager : NSObject

@property (retain, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) IKAppContext *appContext;

+ (id)_sharedInstance;
+ (BOOL)shouldShowWelcomeScreen;
+ (void)acceptGDPRAndSyncWithServers:(id /* block */)a0;
+ (BOOL)showGDPRWelcomeScreen:(id)a0;
+ (void)showOfflineGDPRWelcomeScreen;

- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)_showIOSWelcomeControllerWithAppContext:(id)a0 offline:(BOOL)a1;
- (void)_handleOfflineContinueButton;
- (void)_handleContinueButton;
- (void)_dismissAllModalsIfPresent:(id)a0;

@end
