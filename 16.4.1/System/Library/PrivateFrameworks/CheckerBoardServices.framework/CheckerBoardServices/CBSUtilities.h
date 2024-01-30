@interface CBSUtilities : NSObject

+ (id)proxyServer;
+ (BOOL)isCheckerBoardActive;
+ (BOOL)_currentProcessHasEntitlement:(id)a0;
+ (void)dimDisplay;
+ (void)disableNetworkReconnect;
+ (void)enableNetworkReconnect;
+ (void)exitCheckerBoard;
+ (void)hideSceneStatusBar;
+ (BOOL)rebootToCheckerBoard;
+ (void)sceneStatusBarStyle:(long long)a0;
+ (void)showSceneStatusBar;
+ (void)undimDisplay;

@end
