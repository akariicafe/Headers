@interface NTKSiderealHandsView : NTKAnalogHandsView

- (void)layoutSubviews;
- (id)createHourHandView;
- (id)createMinuteHandView;
- (id)createSecondHandView;
- (void)applyHourMinuteHandsTransitionFraction:(double)a0 fromStrokeColor:(id)a1 fromFillColor:(id)a2 toStrokeColor:(id)a3 toFillColor:(id)a4;
- (void)applySecondHandTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2;
- (double)_minuteHandDotDiameter;

@end
