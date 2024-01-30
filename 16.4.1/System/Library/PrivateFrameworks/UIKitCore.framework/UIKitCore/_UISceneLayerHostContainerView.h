@class UIView, NSString, FBSSceneSettings, FBScene, NSSet, CAContext, UIScenePresentationContext, NSMutableSet, NSMutableOrderedSet, _UIContextLayerHostView;
@protocol _UISceneLayerHostContainerViewDataSource;

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, BSInvalidatable> {
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
    UIView *_innerLayerContainer;
    UIView *_backgroundView;
    CAContext *_asyncRenderGroupingContext;
    _UISceneLayerHostContainerView *_asyncRenderGroupingContainerView;
    _UIContextLayerHostView *_asyncRenderGroupingHostView;
    NSString *_debugDescription;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, weak, nonatomic) id<_UISceneLayerHostContainerViewDataSource> dataSource;
@property (readonly, nonatomic) NSSet *hostedLayers;
@property (readonly, nonatomic) NSSet *nonHostedLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_toggleResizesHostedContextWithNewContext:(id)a0;
- (id)_asyncRenderingContainerView;
- (void)refreshDataSource:(id)a0;
- (void)_setBackgroundView:(id)a0;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_rebuildLayersForNormalPresentationWithReason:(id)a0 withFence:(id)a1;
- (BOOL)_canShowKeyboardLayer;
- (id)_backgroundView;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithScene:(id)a0 debugDescription:(id)a1;
- (void)_toggleStopsHitTestTransformAccumulationWithNewContext:(id)a0;
- (id)window;
- (id)succinctDescriptionBuilder;
- (id)_hostViews;
- (id)_realHostedLayers;
- (id)initWithCoder:(id)a0;
- (void)_setPresentationContext:(id)a0;
- (void)_setDataSource:(id)a0;
- (id)_asyncRenderingHostView;
- (void)_refreshDataSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_toggleClippingDisabledWithNewContext:(id)a0;
- (id)_presentationContext;
- (void)_adjustHostViewFrameAlignment:(id)a0;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)_invalidateAndRemoveAsyncViewsFromHierarchy;
- (id)_createHostViewForLayer:(id)a0;
- (void)dealloc;
- (void)_presentationContextChangedFrom:(id)a0 toContext:(id)a1 force:(BOOL)a2;
- (void)popDataSource:(id)a0;
- (void)_updateRenderingModeForLayersInNormalPresentation;
- (id)_asyncContext;
- (id)_presentationContextForLayer:(id)a0;
- (void)_updateAsyncDrawingOptionsInAsyncPresentation;
- (void)_toggleInheritsSecurityWithNewContext:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_filteredLayersToPresent;
- (void)updateForGeometrySettingsChanges:(id)a0;
- (void)_applyBackgroundViewToHierarchy;
- (void)_rebuildLayersForReason:(id)a0 withFence:(id)a1;
- (void)invalidate;
- (void)_rebuildLayersForAsyncPresentationWithReason:(id)a0 withFence:(id)a1;
- (void).cxx_destruct;
- (void)pushDataSource:(id)a0;

@end
