@class UIStackView, NSString, UITextField, UILabel, WFTextFieldTableItem;

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate> {
    UILabel *_textLabel;
}

@property (weak, nonatomic) WFTextFieldTableItem *tableItem;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)prepareForReuse;
- (void)textDidChange:(id)a0;

@end
