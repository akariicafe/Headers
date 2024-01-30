@class NSTimer;

@interface CAMLowLightSlider : CEKDiscreteSlider

@property (nonatomic, getter=_isPerformingCaptureAnimation, setter=_setPerformingCaptureAnimation:) BOOL _performingCaptureAnimation;
@property (nonatomic, setter=_setSelectedIndexBeforeCaptureAnimation:) unsigned long long _selectedIndexBeforeCaptureAnimation;
@property (nonatomic, setter=_setRemainingCaptureAnimationTime:) double _remainingCaptureAnimationTime;
@property (retain, nonatomic, setter=_setValueLabelUpdateTimer:) NSTimer *_valueLabelUpdateTimer;
@property (readonly, nonatomic) double _inactiveTickMarkHeight;
@property (nonatomic) unsigned long long lowLightMode;
@property (nonatomic, getter=isLowLightActive) BOOL lowLightActive;
@property (nonatomic) struct { double minimumDuration; double maximumDuration; } durationMapping;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)valueText;
- (void)_handleValueLabelUpdateTimerWithStartTime:(double)a0 duration:(double)a1;
- (void)_startValueLabelUpdateTimerWithDuration:(double)a0;
- (void)_stopValueLabelUpdateTimer;
- (id)_valueTextForDuration:(double)a0;
- (id)_valueTextForDuration:(double)a0 format:(id)a1;
- (void)endCaptureAnimationAnimated:(BOOL)a0;
- (void)performCaptureAnimationWithDuration:(double)a0 completion:(id /* block */)a1;

@end
