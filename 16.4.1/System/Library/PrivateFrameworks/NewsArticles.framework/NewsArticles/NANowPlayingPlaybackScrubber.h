@class NSString, UIVisualEffectView, UIActivityIndicatorView, UILabel, AEScrubberSlider, NSDateComponentsFormatter;
@protocol NANowPlayingPlaybackScrubberDelegate;

@interface NANowPlayingPlaybackScrubber : UIView <IMCustomSliderDelegate>

@property (retain, nonatomic) UIVisualEffectView *lighteningEffectView;
@property (retain, nonatomic) AEScrubberSlider *scrubber;
@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDateComponentsFormatter *formatter;
@property (retain, nonatomic) NSDateComponentsFormatter *accessibilityFormatter;
@property (nonatomic) BOOL disableExtenalTimeSpecification;
@property (retain, nonatomic) UILabel *playedTimeLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (weak, nonatomic) id<NANowPlayingPlaybackScrubberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sliderValueChanged:(id)a0;
- (void)_updateAccessibilityValue;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (id)_stringFromTimeInterval:(double)a0;
- (id)_accessibilityStringFromTimeInterval:(double)a0;
- (void)_setCurrentTime:(double)a0 duration:(double)a1 animated:(BOOL)a2;
- (id)_stretchableImageOfHalfRoundFacingRight:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)_stringFromTimeInterval:(double)a0 withFormatter:(id)a1;
- (void)beginTracking:(id)a0;
- (void)enableExternalTimeSpecificationAfterPropagationDelay;
- (void)endTracking:(id)a0;
- (void)scrubberDidChange:(id)a0;
- (void)setCurrentTime:(double)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)setIsWaiting:(BOOL)a0;
- (id)timestampStringAttributes:(BOOL)a0;

@end
