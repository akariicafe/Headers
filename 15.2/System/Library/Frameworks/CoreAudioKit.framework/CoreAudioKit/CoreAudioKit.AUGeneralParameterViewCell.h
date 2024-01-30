@class UIColor;

@interface CoreAudioKit.AUGeneralParameterViewCell : CoreAudioKit.AUGenericViewTableViewCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSlider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ unitLabel;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (void)sliderValueChangedWithSender:(id)a0;
- (void)sliderTouched:(id)a0;
- (void)sliderReleased:(id)a0;

@end
