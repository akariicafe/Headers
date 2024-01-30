@class UILabel;

@interface _UIDebugIdentifierWindow : UIWindow {
    UILabel *_sceneIdentifierLabel;
}

- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (BOOL)_ignoresHitTest;
- (void)_updateSceneIdentifierLabel;
- (id)initWithWindowScene:(id)a0;

@end
