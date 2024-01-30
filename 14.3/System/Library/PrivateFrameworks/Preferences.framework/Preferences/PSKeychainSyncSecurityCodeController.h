@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    double _keyboardHeight;
}

@property (retain, nonatomic) NSString *firstPasscodeEntry;
@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;
@property (nonatomic) BOOL showsAdvancedSettings;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)_configureTextEntryCell;
- (void)showAdvancedOptions;
- (void)generateRandomCode;
- (void)forgotSecurityCode;
- (void)updateNextButton;
- (void)animatePasscodeFieldLeft:(BOOL)a0;
- (void)textEntryViewDidChange:(id)a0;
- (id)placeholderText;
- (void)didFinishEnteringText:(id)a0;
- (void)dismissAlerts;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardWillShow:(id)a0;
- (void)viewDidLoad;

@end
