@class CAMExposureBiasSliderThumb, UIView;

@interface CAMExposureBiasSlider : UIView

@property (readonly, retain, nonatomic) CAMExposureBiasSliderThumb *_thumbView;
@property (readonly, retain, nonatomic) UIView *_minTrackView;
@property (readonly, retain, nonatomic) UIView *_maxTrackView;
@property (readonly, retain, nonatomic) UIView *_minTrackMaskView;
@property (readonly, retain, nonatomic) UIView *_maxTrackMaskView;
@property (readonly, nonatomic) double _lastInteractionTime;
@property (nonatomic) float exposureBiasMin;
@property (nonatomic) float exposureBiasMax;
@property (nonatomic) float exposureBiasValue;
@property (nonatomic) BOOL suspendTrackFadeOut;
@property (readonly, nonatomic) double thumbMaxExtension;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)_updateForChangedNormalizedExposureValue;
- (void)updateLastInteractionTime;
- (float)_normalizedExposureValue;
- (struct CGPoint { double x0; double x1; })_sunCenterForNormalizedValue:(float)a0;
- (void)_cancelDelayedDim;
- (void)_scheduleDelayedDim;
- (void)_animateTrackAlpha:(double)a0 withDuration:(double)a1;
- (double)_trackAlpha;
- (void)_dimTrackForInactivity;
- (void)forceTrackDimmed;

@end
