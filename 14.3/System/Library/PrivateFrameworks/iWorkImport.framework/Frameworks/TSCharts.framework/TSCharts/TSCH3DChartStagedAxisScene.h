@interface TSCH3DChartStagedAxisScene : TSCH3DChartScene

+ (BOOL)supportsValueAxisLabelAlignmentCaching;

- (void)addLabelsToScene;
- (void)addChartTitlesToScene;
- (void)addObjectsToScene;
- (void)addPartsForEnumerator:(id)a0 styleIndex:(unsigned long long)a1;
- (void)addGridlinesToScene;
- (void)addSageBoundsToScene;

@end
