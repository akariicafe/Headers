@class TSCH3DActiveLabelsTypeBounds, NSString, TSUNoCopyDictionary, TSUMutablePointerSet, TSCH3DLabelsRendererTransforms, TSCH3DGetBoundsPipeline;

@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate> {
    TSCH3DGetBoundsPipeline *mPipeline;
    TSCH3DLabelsRendererTransforms *mTransforms;
    TSUNoCopyDictionary *mSceneObjectLabelsBounds;
    BOOL mLabelsHaveCache;
    BOOL mLabelsDidOverride;
    TSUMutablePointerSet *mDebugCachedSceneObjects;
}

@property (retain, nonatomic) TSCH3DActiveLabelsTypeBounds *activeBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneDelegate;

- (id)init;
- (void)dealloc;
- (void)willRunForScene:(id)a0 pipeline:(id)a1;
- (void)didRunForScene:(id)a0 pipeline:(id)a1;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;
- (void)didGenerateShaderEffects:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (void)didSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)a0 pipeline:(id)a1;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)a0 pipeline:(id)a1;
- (void)setOffset:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 labelType:(int)a1 boundsIndex:(long long)a2 forSceneObject:(id)a3;
- (BOOL)willSubmitLabelType:(int)a0 boundsIndex:(long long)a1 alignment:(unsigned long long)a2 elementIndex:(unsigned long long)a3 forSceneObject:(id)a4;
- (BOOL)willSubmitLabelForSceneObject:(id)a0 labelRenderInfo:(id)a1;
- (void)updateExternalLabelAttribute:(id)a0 sceneObject:(id)a1 labelRenderInfo:(id)a2;
- (BOOL)willBeginProcessingSceneObject:(id)a0;
- (void)didEndProcessingSceneObject:(id)a0;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)a0 pipeline:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForSceneObject:(id)a0;
- (BOOL)willProcessSeries:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 effects:(id)a1 sceneObject:(id)a2 pipeline:(id)a3;
- (BOOL)willProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willProcessElement:(id)a0 sceneObject:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)a0 sceneObject:(id)a1;
- (void)didTransformElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willRenderElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willSubmitElement:(id)a0 sceneObject:(id)a1;
- (id)interestedClasses;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(id)a0 offset:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1;
- (void)p_addAllActiveLabelsBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;

@end
