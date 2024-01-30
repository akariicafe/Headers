@class UITextField;

@interface CNPickerItemCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)endEditing;
- (void)setTextFieldHidden:(BOOL)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
