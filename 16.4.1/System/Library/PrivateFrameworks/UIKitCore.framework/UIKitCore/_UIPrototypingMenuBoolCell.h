@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell

@property (retain, nonatomic) UISwitch *valueSwitch;

+ (long long)_layoutAxis;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_prototypingSettingDidChange;
- (void)_switchDidChangeValue:(id)a0;

@end
