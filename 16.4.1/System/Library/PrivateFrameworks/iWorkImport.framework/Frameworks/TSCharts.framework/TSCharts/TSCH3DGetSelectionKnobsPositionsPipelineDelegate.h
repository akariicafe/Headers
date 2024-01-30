@class TSCH3DScene, NSString, NSArray, NSMutableDictionary, TSCH3DChartRep, NSMutableArray, TSCH3DGeometry;

@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject <TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate> {
    TSCH3DChartRep *_rep;
    NSArray *_selection;
    NSMutableDictionary *_labelsBoundsForMerging;
    TSCH3DScene *_scene;
    int _currentLabelType;
    int _knobsMode;
}

@property (retain, nonatomic) NSMutableArray *projectedPoints;
@property (retain, nonatomic) TSCH3DGeometry *geometry;
@property (readonly, nonatomic) BOOL shouldMerge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)willSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (BOOL)willBeginProcessingSceneObject:(id)a0;
- (BOOL)willProcessElement:(id)a0 sceneObject:(id)a1;
- (void)addLabelBoundsForMerging:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didEndProcessingSceneObject:(id)a0;
- (void)didGenerateShaderEffects:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const void *)a0 effects:(id)a1 sceneObject:(id)a2 pipeline:(id)a3;
- (void)didProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didRunForScene:(id)a0 pipeline:(id)a1;
- (void)didSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (void)didTransformElement:(id)a0 sceneObject:(id)a1;
- (id)initWithRep:(id)a0 selection:(id)a1;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)a0 pipeline:(id)a1;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)a0 pipeline:(id)a1;
- (BOOL)p_labelSelectedForType:(int)a0 alignment:(unsigned long long)a1 elementIndex:(long long)a2;
- (id)p_selectedSeries;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)a0 pipeline:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForElement:(id)a0 sceneObject:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForSceneObject:(id)a0;
- (void)setOffset:(const void *)a0 labelType:(int)a1 boundsIndex:(long long)a2 forSceneObject:(id)a3;
- (void)updateExternalLabelAttribute:(id)a0 sceneObject:(id)a1 labelRenderInfo:(id)a2;
- (BOOL)willProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willProcessSeries:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willRenderElement:(id)a0 sceneObject:(id)a1;
- (void)willRunForScene:(id)a0 pipeline:(id)a1;
- (BOOL)willSubmitElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willSubmitGeometry:(id)a0;
- (BOOL)willSubmitLabelForSceneObject:(id)a0 labelRenderInfo:(id)a1;
- (BOOL)willSubmitLabelType:(int)a0 boundsIndex:(long long)a1 alignment:(unsigned long long)a2 elementIndex:(unsigned long long)a3 forSceneObject:(id)a4;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)a0 sceneObject:(id)a1;

@end
