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

+ (id)inputModes;
+ (unsigned long long)count;
+ (void)setInputModes:(id)a0;
+ (id)attributedTitleForSymbolName:(id)a0 cellTitle:(id)a1;
+ (id)keyboardDisplayNameForIdentifier:(id)a0;
+ (id)softwareLayoutsForBaseInputMode:(id)a0;
+ (id)displayNameForHardwareLayout:(id)a0;
+ (id)supportedBaseInputModesForLanguage:(id)a0;
+ (id)availableSoftwareLayoutsForBaseInputMode:(id)a0;
+ (id)supportedInputModesForLanguage:(id)a0;
+ (id)attributedStringForSymbolName:(id)a0;
+ (id)availableInputModesForLanguage:(id)a0;

- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)init;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (Class)tableViewClass;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)reloadSpecifiers;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)addNewKeyboards:(id)a0;
- (BOOL)allKeyboardsEnabled;
- (void)_writeKeyboards;
- (void)updateEditButtonState;
- (id)specifierForInputMode:(id)a0;
- (id)specifierForExtensionInputMode:(id)a0;
- (void)removeInputModeWithIdentifier:(id)a0;

@end
