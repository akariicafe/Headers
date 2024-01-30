@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)beginEditing;
- (void)endEditing;

@end
