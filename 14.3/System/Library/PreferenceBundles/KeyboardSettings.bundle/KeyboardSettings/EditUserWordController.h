@class NSString, PSSpecifier, _KSTextReplacementEntry, UITextField, UIAlertController, TIUserWordsManager;

@interface EditUserWordController : PSListController <UITextFieldDelegate>

@property (copy, nonatomic) _KSTextReplacementEntry *oldEntry;
@property (copy, nonatomic) _KSTextReplacementEntry *nextEntry;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSString *shortcut;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (copy, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) UITextField *targetTextField;
@property (readonly, nonatomic) UITextField *shortcutTextField;
@property (retain, nonatomic) UIAlertController *keyboardAlertController;
@property (retain, nonatomic) TIUserWordsManager *dictionaryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsToDelegate:(id)a0;
+ (id)propertyTitles;

- (BOOL)textFieldShouldClear:(id)a0;
- (id)init;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)save;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (void)viewDidLoad;
- (id)initWithUserWord:(id)a0;
- (BOOL)_shouldSetDefaultFirstResponder;
- (void)_handleValidationWithError:(long long)a0;
- (id)validationErrorStringFromError:(long long)a0;
- (void)_unpackTextReplacementError:(id)a0;
- (id)originalDelegateForTextField:(id)a0;

@end
