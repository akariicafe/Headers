@class NSString, UITextField;

@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate> {
    UITextField *_editingTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)firstResponderItem;
- (void)setCardGroupItem:(id)a0;
- (void)textFieldDidChange:(id)a0;

@end
