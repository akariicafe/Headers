@class NSString, UITextField;

@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate> {
    UITextField *_editingTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_cnui_applyContactStyle;
- (id)firstResponderItem;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setCardGroupItem:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;

@end
