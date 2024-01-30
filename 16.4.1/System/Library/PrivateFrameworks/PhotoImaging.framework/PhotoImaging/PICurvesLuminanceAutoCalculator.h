@interface PICurvesLuminanceAutoCalculator : PICurvesAutoCalculator

- (id)computeCurvesForImageHistogram:(id)a0;
- (struct CGPoint { double x0; double x1; })curvePointAtIndex:(int)a0 blackPoint:(double)a1 whitePoint:(double)a2 histogram:(id)a3;

@end
