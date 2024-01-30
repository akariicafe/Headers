@class NSString;

@interface TSCH3DChartSelectedElementSceneObjectDelegate : NSObject <TSCH3DChartAllElementSceneObjectDelegate> {
    unsigned long long _selectedSeriesIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)willBeginProcessingSceneObject:(id)a0;
- (BOOL)willProcessElement:(id)a0 sceneObject:(id)a1;
- (void)didEndProcessingSceneObject:(id)a0;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const void *)a0 effects:(id)a1 sceneObject:(id)a2 pipeline:(id)a3;
- (void)didProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didTransformElement:(id)a0 sceneObject:(id)a1;
- (id)initWithSelectedSeriesIndex:(unsigned long long)a0;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)a0 pipeline:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForElement:(id)a0 sceneObject:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForSceneObject:(id)a0;
- (BOOL)willProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willProcessSeries:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willRenderElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willSubmitElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)a0 sceneObject:(id)a1;

@end
