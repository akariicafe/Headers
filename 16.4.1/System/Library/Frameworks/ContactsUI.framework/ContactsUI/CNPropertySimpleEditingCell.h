@class NSString, UITextField;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)dealloc;
- (void).cxx_destruct;
- (id)constantConstraints;
- (id)firstResponderItem;
- (void)textFieldChanged:(id)a0;
- (void)updateValueWithPropertyItem:(id)a0;
- (id)valueView;
- (id)variableConstraints;

@end
