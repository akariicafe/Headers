@interface TSCHChartTypePieFamily : TSCH2DChartType

- (Class)repClass;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)shouldChangeExplosionWithPreviousChartType:(id)a0 chartInfo:(id)a1 seriesList:(id)a2;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;

@end
