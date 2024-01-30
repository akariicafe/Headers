@class UIWindowScene, NSMutableArray, SBRootSceneWindow;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (readonly, nonatomic) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)assertDisconnectionFromRenderServerForReason:(id)a0;
- (void)_reconnectToRenderServer;
- (void)_disconnectFromRenderServer;

@end
