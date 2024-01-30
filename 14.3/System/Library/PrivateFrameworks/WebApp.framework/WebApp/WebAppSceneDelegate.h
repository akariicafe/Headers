@class NSString, UIWindow, WebAppViewController;

@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    WebAppViewController *_webApp;
    UIWindow *_window;
    BOOL _wasSuspendedUnderLock;
    BOOL _sceneHasEverEnteredForeground;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)_tearDownWindowAndWebApp;

@end
