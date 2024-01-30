@interface TSCH3DChartSeriesNameLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

- (void)dispatchElementLabelHandler:(id /* block */)a0;
- (int)knobsModeForLabelType:(int)a0 scene:(id)a1;
- (id)p_axisLabelsFromScene:(id)a0;
- (void)renderAnnotatedLabels:(id)a0;
- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;

@end
