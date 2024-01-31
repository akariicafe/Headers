@class UITextField;

@interface CNPickerItemCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;

- (void)endEditing;
- (void)prepareForReuse;
- (void)beginEditing;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setTextFieldHidden:(BOOL)a0;

@end
