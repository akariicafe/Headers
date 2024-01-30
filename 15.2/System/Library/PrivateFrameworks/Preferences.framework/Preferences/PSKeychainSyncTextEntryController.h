@class NSString, PSSpecifier, UIView, PSTableCell;
@protocol UIKeyInput;

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    PSTableCell *_textEntryCell;
    UIView<UIKeyInput> *_textEntryView;
    PSSpecifier *_textEntrySpecifier;
}

@property (retain, nonatomic) NSString *textValue;
@property (nonatomic) int textEntryType;
@property (nonatomic) BOOL hidesNextButton;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL textFieldHasRoundBorder;
@property (nonatomic) BOOL convertsNumeralsToASCII;
@property (nonatomic) unsigned long long numberOfPasscodeFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)passcodeField:(id)a0 didUpdateEnteredPasscode:(id)a1;
- (id)textEntrySpecifier;
- (void)setTextValue:(id)a0 forSpecifier:(id)a1;
- (id)getTextValueForSpecifier:(id)a0;
- (id)placeholderText;
- (void)viewWillAppear:(BOOL)a0;
- (void)nextPressed;
- (void)viewWillDisappear:(BOOL)a0;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntryView;
- (void)updateNextButton;
- (void)setTextEntryText:(id)a0;
- (id)textEntryText;
- (void)textEntryViewDidChange:(id)a0;
- (void)didFinishEnteringText:(id)a0;
- (void)willBecomeActive;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)textFieldChanged:(id)a0;

@end
