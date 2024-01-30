@class NSArray, NSString, UITextField, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate>

@property (retain, nonatomic) NSArray *predefinedLabels;
@property (retain, nonatomic) NSString *validatedCustomLabelText;
@property (weak, nonatomic) UITextField *textField;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToParentViewController:(id)a0;
- (void)dismissKeyboard;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (id)getLogger;
- (void)viewDidLoad;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
