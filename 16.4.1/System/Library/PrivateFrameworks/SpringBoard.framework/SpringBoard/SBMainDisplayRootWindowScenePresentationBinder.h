@class UIWindowScene, NSMutableArray, SBRootSceneWindow;

@interface SBMainDisplayRootWindowScenePresentationBinder : SBRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (readonly, nonatomic) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (void)_disconnectFromRenderServer;
- (id)_init;
- (void)_reconnectToRenderServer;
- (void).cxx_destruct;
- (id)assertDisconnectionFromRenderServerForReason:(id)a0;

@end
