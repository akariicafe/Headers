@class NSArray, UIAlertController, PSSpecifier, UIAlertAction;

@interface TIAddExtensionKeyboardController : PSAppListController {
    BOOL _hasShownWarning;
    BOOL _didRequestOpenAccess;
    BOOL _didGrantOpenAccess;
}

@property (retain, nonatomic) NSArray *moduleSpecifiers;
@property (retain, nonatomic) PSSpecifier *specifierForWarning;
@property (retain, nonatomic) UIAlertController *networkAccessAlertController;
@property (retain, nonatomic) UIAlertAction *networkAccessAlertActionDefault;
@property (retain, nonatomic) UIAlertAction *networkAccessAlertActionCancel;
@property (nonatomic) BOOL behavesAsModalForAddSheet;
@property (retain, nonatomic) PSSpecifier *networkAccessSpecifier;

+ (id)specifiersForExtensionInputMode:(id)a0 parentSpecifier:(id)a1;

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setPrivacyAccess:(id)a0 forSpecifier:(id)a1;
- (void)dealloc;
- (void)updateDoneButton;
- (void)didEnterBackground:(id)a0;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped;
- (void)viewDidAppear:(BOOL)a0;
- (void)doneButtonTapped;
- (id)newSpecifiers;
- (void)addCheckedInputModes;
- (void)updateNetworkPolicyState;
- (void)setNetworkAccessSpecifierForKeyboardInputMode:(id)a0;
- (void)toggleInputMode:(id)a0 specifier:(id)a1;
- (id)fetchInputModeEnabled:(id)a0;
- (void)trackExtensionsContainedInApp;
- (void)setNetworkPolicyValue:(id)a0;
- (void)updateNetworkPolicyStateIfNecessaryForCell:(id)a0;
- (id)selectedInputModes;

@end
