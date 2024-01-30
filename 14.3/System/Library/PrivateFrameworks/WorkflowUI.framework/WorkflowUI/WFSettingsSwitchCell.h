@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell

@property (readonly, weak, nonatomic) UISwitch *switchControl;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;

@end
