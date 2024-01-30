@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell

@property (retain, nonatomic) UISwitch *valueSwitch;

+ (long long)_layoutAxis;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_switchDidChangeValue:(id)a0;
- (void)_prototypingSettingDidChange;
- (void).cxx_destruct;

@end
