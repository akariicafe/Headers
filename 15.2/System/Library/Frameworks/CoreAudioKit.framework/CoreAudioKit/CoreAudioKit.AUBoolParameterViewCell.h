@class UIColor;

@interface CoreAudioKit.AUBoolParameterViewCell : CoreAudioKit.AUGenericViewTableViewCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSwitch;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (void)switchValueChangedWithSender:(id)a0;

@end
