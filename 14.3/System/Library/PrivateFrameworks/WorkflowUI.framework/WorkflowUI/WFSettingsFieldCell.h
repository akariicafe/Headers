@class UITextField;

@interface WFSettingsFieldCell : WFSettingsCell

@property (readonly, weak, nonatomic) UITextField *textField;
@property (nonatomic) double offsetX;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
