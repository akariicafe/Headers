@class SBSingleSceneController;

@interface SBOverlayUISceneController : SBSystemUISceneController {
    SBSingleSceneController *_subterraneanSceneController;
}

+ (id)_setupInfo;

- (void)windowSceneDidConnect:(id)a0;
- (id)_subterraneanSceneIdentifierForWindowScene:(id)a0;
- (void).cxx_destruct;

@end
