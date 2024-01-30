@interface TSCH3DBarChartCircularAppearance : TSCH3DBarChartDefaultAppearance

+ (int)shapeType;
+ (struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; })defaultDetails;

- (BOOL)isCircular;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;

@end
