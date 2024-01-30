@class UIWindowScene, NSMutableArray, SBRootSceneWindow;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (readonly, nonatomic) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (void)_reconnectToRenderServer;
- (void)_disconnectFromRenderServer;
- (void).cxx_destruct;
- (id)init;
- (id)assertDisconnectionFromRenderServerForReason:(id)a0;

@end
