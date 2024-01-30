@class TSCH3DLabelsRenderer;

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject {
    TSCH3DLabelsRenderer *_labelsRenderer;
}

- (id)init;
- (void).cxx_destruct;
- (void)render:(id)a0;
- (void)dispatchElementLabelHandler:(id /* block */)a0;
- (void)getBounds:(id)a0;
- (void)getSceneObjectElementsBounds:(id)a0;
- (void)getSelectionKnobsPositions:(id)a0;
- (int)knobsModeForLabelType:(int)a0 scene:(id)a1;
- (id)labelsRenderer;
- (void)p_renderWithPipeline:(id)a0 block:(id /* block */)a1;
- (void)postGetBounds:(id)a0;
- (void)postRenderBounds:(id)a0;
- (void)postrender:(id)a0;
- (void)primeRenderCaches:(id)a0;
- (void)rayPick:(id)a0;
- (void)renderAnnotatedLabels:(id)a0;
- (void)renderLabelRenderInfo:(id)a0;
- (void)renderLabels:(id)a0;
- (void)renderLabelsResourcesSessionWithResources:(id)a0 expectedSize:(const void *)a1 pipeline:(id)a2 renderBlock:(id /* block */)a3;

@end
