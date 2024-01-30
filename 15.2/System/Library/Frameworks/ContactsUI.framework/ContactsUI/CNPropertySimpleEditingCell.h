@class NSString, UITextField;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)firstResponderItem;
- (void)updateValueWithPropertyItem:(id)a0;
- (id)valueView;
- (void).cxx_destruct;
- (id)variableConstraints;
- (void)prepareForReuse;
- (id)constantConstraints;
- (void)dealloc;
- (void)textFieldChanged:(id)a0;

@end
