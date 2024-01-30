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

- (id)specifiers;
- (void)viewDidLoad;
- (id)placeholderText;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)_configureTextEntryCell;
- (void)showAdvancedOptions;
- (void)generateRandomCode;
- (void)forgotSecurityCode;
- (void)updateNextButton;
- (void)animatePasscodeFieldLeft:(BOOL)a0;
- (void)dismissAlerts;
- (void)textEntryViewDidChange:(id)a0;
- (void)didFinishEnteringText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;

@end
