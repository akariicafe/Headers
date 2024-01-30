@interface TSCH3DChartValueLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

- (void)renderAnnotatedLabels:(id)a0;
- (void)dispatchElementLabelHandler:(id /* block */)a0;
- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;
- (id)convertSelectionPathTo3D:(id)a0 path:(id)a1;

@end
