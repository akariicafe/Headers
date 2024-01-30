@class UIScenePresentationContext, NSSet, NSString, NSMutableOrderedSet, NSMutableSet, FBScene, FBSSceneSettings;
@protocol _UISceneLayerHostContainerViewDataSource;

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver> {
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, weak, nonatomic) id<_UISceneLayerHostContainerViewDataSource> dataSource;
@property (readonly, nonatomic) NSSet *hostedLayers;
@property (readonly, nonatomic) NSSet *nonHostedLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)popDataSource:(id)a0;
- (void)_adjustHostViewFrameAlignment:(id)a0;
- (id)init;
- (void)_rebuildLayersForReason:(id)a0;
- (void)_setPresentationContext:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithScene:(id)a0;
- (void)dealloc;
- (id)_presentationContextForLayer:(id)a0;
- (id)succinctDescription;
- (void)_updateRenderingMode;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)refreshDataSource:(id)a0;
- (BOOL)_canShowKeyboardLayer;
- (void)_refreshDataSource;
- (void)_setDataSource:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)window;
- (void)updateForGeometrySettingsChanges:(id)a0;
- (void)_presentationContextChangedFrom:(id)a0 toContext:(id)a1 force:(BOOL)a2;
- (id)_filteredLayersToPresent;
- (void)_toggleClippingDisabledWithNewContext:(id)a0;
- (void)pushDataSource:(id)a0;
- (id)_createHostViewForLayer:(id)a0;

@end
