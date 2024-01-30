@class UIColor;

@interface CoreAudioKit.AUGenericViewBoolParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSwitch;
@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (void)switchValueChangedWithSender:(id)a0;

@end
