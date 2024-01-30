@class NSHashTable, NSString, FBSSceneSettings, FBScene, FBSSceneSettingsDiffInspector, _UIScenePresenter, _UISceneLayerHostContainerView, UIScenePresentationContext;
@protocol UIScenePresenter;

@interface _UIScenePresentationView : _UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable> {
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
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

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (id)presentationContextForSceneLayerHostContainerView;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void).cxx_destruct;
- (void)_updatePresentationContextFrom:(id)a0 toContext:(id)a1;
- (void)removeObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)succinctDescription;
- (id)initWithPresenter:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_geometryDidUpdateWithTransitionContext:(id)a0;
- (void)_updateBackgroundColor;
- (void)didMoveToWindow;
- (id)succinctDescriptionBuilder;
- (void)_updateFrameAndTransform;
- (void)invalidate;

@end
