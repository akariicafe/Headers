@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)endEditing;
- (void)beginEditing;
- (void)textFieldDidEndEditing:(id)a0;
- (void)dealloc;

@end
