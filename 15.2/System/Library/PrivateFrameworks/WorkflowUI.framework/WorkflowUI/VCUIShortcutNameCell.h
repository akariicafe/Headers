@class UITextField;

@interface VCUIShortcutNameCell : UITableViewCell

@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic, getter=isEditable) BOOL editable;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
