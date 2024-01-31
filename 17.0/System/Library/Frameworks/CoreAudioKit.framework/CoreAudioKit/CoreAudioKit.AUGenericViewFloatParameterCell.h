@class UIColor;

@interface CoreAudioKit.AUGenericViewFloatParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSlider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ unitLabel;
@property (nonatomic, retain) UIColor *tintColor;

- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)initWithCoder:(id)a0;
- (void)sliderReleasedWithSender:(id)a0;
- (void)sliderTouchedWithSender:(id)a0;
- (void)sliderValueChangedWithSender:(id)a0;

@end
