@class NSString;

@interface WiFiPasswordController : PSListController <UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateDefaultPassword;

- (void)doneButtonClicked:(id)a0;
- (void)emptySetter:(id)a0 specifier:(id)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)specifiers;
- (void)cancelButtonClicked:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (void)viewDidLoad;
- (id)wifiPassword:(id)a0;

@end
