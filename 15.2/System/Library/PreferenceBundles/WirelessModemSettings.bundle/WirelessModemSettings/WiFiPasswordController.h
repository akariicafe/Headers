@class NSString;

@interface WiFiPasswordController : PSListController <UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateDefaultPassword;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)cancelButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)textDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)doneButtonClicked:(id)a0;
- (void)emptySetter:(id)a0 specifier:(id)a1;
- (id)wifiPassword:(id)a0;

@end
