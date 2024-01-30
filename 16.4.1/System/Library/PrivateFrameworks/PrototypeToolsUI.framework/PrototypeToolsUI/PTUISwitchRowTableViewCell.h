@class UISwitch;

@interface PTUISwitchRowTableViewCell : PTUIRowTableViewCell {
    UISwitch *_switch;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateDisplayedValue;

@end
