@class UIColor;

@interface CoreAudioKit.AUGenericViewBoolParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSwitch;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityActivate;
- (void)switchValueChangedWithSender:(id)a0;

@end
