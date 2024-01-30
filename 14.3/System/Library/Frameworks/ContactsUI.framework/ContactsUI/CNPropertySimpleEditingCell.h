@class NSString, UITextField;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (id)variableConstraints;
- (id)valueView;
- (id)constantConstraints;
- (id)firstResponderItem;
- (void)updateValueWithPropertyItem:(id)a0;

@end
