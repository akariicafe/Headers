@interface DialerControllerAccessibility : __DialerControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (BOOL)_accessibilityHasDeletableText;
- (void)_accessibilityInsertText:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)a0 withString:(id)a1;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilitySupportsTextInsertionAndDeletion;
- (void)phonePad:(id)a0 appendString:(id)a1;
- (void)phonePad:(id)a0 replaceLastDigitWithString:(id)a1;
- (void)phonePadDeleteLastDigit:(id)a0;
- (void)_voiceOverStatusChange:(id)a0;

@end
