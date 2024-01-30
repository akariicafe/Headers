@class UIView, NSString, FBSSceneSettings, FBScene, NSHashTable, FBSSceneSettingsDiffInspector, _UIScenePresenter, _UISceneLayerHostContainerView, UIScenePresentationContext;
@protocol UIScenePresenter;

@interface _UIScenePresentationView : _UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable> {
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
    UIView *_backgroundView;
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;
    NSHashTable *_observers;
    BOOL _invalidated;
}

@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext;
@property (retain, nonatomic) _UISceneLayerHostContainerView *hostContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<UIScenePresenter> presenter;
@property (retain, nonatomic) UIView *backgroundView;

- (void)_updateBackgroundColor;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updatePresentationContextFrom:(id)a0 toContext:(id)a1;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)addObserver:(id)a0;
- (void)didMoveToWindow;
- (void)_updateFrameAndTransform;
- (id)identifier;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)_geometryDidUpdateWithTransitionContext:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithPresenter:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)presentationContextForSceneLayerHostContainerView;

@end
