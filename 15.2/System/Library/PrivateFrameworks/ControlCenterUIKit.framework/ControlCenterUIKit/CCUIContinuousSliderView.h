@class NSString, _UIEdgeFeedbackGenerator, UIView, UIPanGestureRecognizer;

@interface CCUIContinuousSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate> {
    UIView *_backgroundView;
    double _startingLength;
    float _startingValue;
    BOOL _gestureStartedInside;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
}

@property (nonatomic) double continuousSliderCornerRadius;
@property (nonatomic) unsigned long long axis;
@property (readonly, nonatomic) UIView *valueIndicatorClippingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_endTrackingWithGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_continueTrackingWithGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (void).cxx_destruct;
- (void)_handleValueChangeGestureRecognizer:(id)a0;
- (id)topLevelBlockingGestureRecognizers;
- (void)_beginTrackingWithGestureRecognizer:(id)a0;
- (float)_valueForTouchTranslation:(struct CGPoint { double x0; double x1; })a0;
- (float)filteredValueForValue:(float)a0;
- (double)sliderLengthForValue:(float)a0;
- (void)_updateValueForPanGestureRecognizer:(id)a0 forContinuedGesture:(BOOL)a1;

@end
