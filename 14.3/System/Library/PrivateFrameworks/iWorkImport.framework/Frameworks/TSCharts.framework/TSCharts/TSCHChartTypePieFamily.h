@interface TSCHChartTypePieFamily : TSCH2DChartType

- (id)init;
- (Class)repClass;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)shouldChangeExplosionWithPreviousChartType:(id)a0 chartInfo:(id)a1 seriesList:(id)a2;
- (struct CGSize { double x0; double x1; })mungeBodySize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;

@end
