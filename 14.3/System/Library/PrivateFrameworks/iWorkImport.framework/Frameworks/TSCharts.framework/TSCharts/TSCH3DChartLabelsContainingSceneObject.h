@class TSCH3DLabelsRenderer;

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject {
    TSCH3DLabelsRenderer *mLabelsRenderer;
}

- (id)init;
- (void)dealloc;
- (void)render:(id)a0;
- (void)getBounds:(id)a0;
- (void)postGetBounds:(id)a0;
- (void)rayPick:(id)a0;
- (id)labelsRenderer;
- (void)renderLabels:(id)a0;
- (void)p_render:(id)a0 selector:(SEL)a1;
- (void)renderAnnotatedLabels:(id)a0;
- (void)postRenderBounds:(id)a0;
- (void)postrender:(id)a0;
- (void)primeRenderCaches:(id)a0;
- (int)knobsModeForLabelType:(int)a0 scene:(id)a1;
- (void)getSelectionKnobsPositions:(id)a0;
- (void)getSceneObjectElementsBounds:(id)a0;
- (void)dispatchElementLabelHandler:(id /* block */)a0;
- (void)renderLabelsResourcesSessionWithResources:(id)a0 expectedSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1 pipeline:(id)a2 renderBlock:(id /* block */)a3;
- (void)renderLabelRenderInfo:(id)a0;

@end
