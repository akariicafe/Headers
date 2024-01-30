@interface CBSUtilities : NSObject

+ (id)proxyServer;
+ (BOOL)_currentProcessHasEntitlement:(id)a0;
+ (BOOL)isCheckerBoardActive;
+ (void)exitCheckerBoard;
+ (void)showSceneStatusBar;
+ (void)hideSceneStatusBar;
+ (void)dimDisplay;
+ (void)undimDisplay;
+ (void)disableNetworkReconnect;
+ (void)enableNetworkReconnect;
+ (BOOL)rebootToCheckerBoard;
+ (void)sceneStatusBarStyle:(long long)a0;

@end
