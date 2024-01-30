@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (void)layoutSubviews;
- (void)endEditing;
- (void)beginEditing;

@end
