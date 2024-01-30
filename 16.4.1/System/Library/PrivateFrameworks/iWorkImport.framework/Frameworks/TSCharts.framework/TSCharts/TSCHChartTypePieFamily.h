@interface TSCHChartTypePieFamily : TSCH2DChartType

- (Class)repClass;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (BOOL)shouldChangeExplosionWithPreviousChartType:(id)a0 chartInfo:(id)a1 seriesList:(id)a2;
- (BOOL)supportsAxisLabelAngle;

@end
