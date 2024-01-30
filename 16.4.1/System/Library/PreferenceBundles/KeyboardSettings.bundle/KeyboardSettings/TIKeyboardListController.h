@class TIAboutKeyboardPrivacyController, NSMutableArray, PSSpecifier;

@interface TIKeyboardListController : PSListController {
    BOOL _emojiEnabled;
    PSSpecifier *_groupSeparator;
    PSSpecifier *_addNewInputModeSpecifier;
    unsigned long long _totalKeyboardsCount;
    unsigned long long _numberOfEnabledKeyboards;
    BOOL deletingRow;
}

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (readonly, nonatomic) NSMutableArray *keyboardsArray;
@property (nonatomic) BOOL newKeyboardsAdded;

+ (unsigned long long)count;
+ (id)inputModes;
+ (id)availableInputModesForLanguage:(id)a0;
+ (id)supportedInputModesForLanguage:(id)a0;
+ (id)attributedStringForSymbolName:(id)a0;
+ (id)attributedTitleForSymbolName:(id)a0 cellTitle:(id)a1;
+ (id)availableSoftwareLayoutsForBaseInputMode:(id)a0;
+ (id)displayNameForHardwareLayout:(id)a0 inputMode:(id)a1;
+ (id)keyboardDisplayNameForIdentifier:(id)a0;
+ (void)setInputModes:(id)a0;
+ (id)softwareLayoutsForBaseInputMode:(id)a0;
+ (id)supportedBaseInputModesForLanguage:(id)a0;

- (void)reloadSpecifiers;
- (void)dealloc;
- (void)viewDidLoad;
- (Class)tableViewClass;
- (id)specifiers;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)_writeKeyboards;
- (id)specifierForExtensionInputMode:(id)a0;
- (void)addNewKeyboards:(id)a0;
- (BOOL)allKeyboardsEnabled;
- (void)removeInputModeWithIdentifier:(id)a0;
- (id)specifierForInputMode:(id)a0;
- (void)updateEditButtonState;

@end
