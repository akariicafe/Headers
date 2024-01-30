@class NSString, UITextField;

@interface WFTextFieldTableItem : WFCustomTableItem

@property (readonly, nonatomic) id /* block */ textFieldSetup;
@property (weak, nonatomic) UITextField *lastConfiguredTextField;
@property (nonatomic) BOOL becomeFirstResponderOnNextConfigure;
@property (readonly, nonatomic) NSString *primaryText;

+ (id)itemWithPrimaryText:(id)a0 initialValue:(id)a1 textFieldSetup:(id /* block */)a2;

- (void).cxx_destruct;
- (void)activate;
- (void)textFieldTextDidChange:(id)a0;
- (void)configureCell:(id)a0;
- (void)activateNextItemIfPossible;

@end
