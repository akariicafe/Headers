@class UISwitch;

@interface PTUISwitchRowTableViewCell : PTUIRowTableViewCell {
    UISwitch *_switch;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateDisplayedValue;
- (void)_valueChanged:(id)a0;

@end
