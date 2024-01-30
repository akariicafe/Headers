@class NSArray, UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement

@property (retain, nonatomic) NSArray *cachedVariantKeys;
@property (retain, nonatomic) UIKBTree *key;
@property (nonatomic) BOOL changesOnShiftDown;

+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)variantKeysForKey:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (void).cxx_destruct;
- (BOOL)_accessibilitySecondaryActivate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (id)accessibilityLabel;
- (id)description;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySupportsSecondaryActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)_accessibilityLabel;
- (id)accessibilityValue;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibilityKeyboardKeyEnteredString;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (BOOL)_accessibilityWasForcedToUseForeignKB;
- (BOOL)isButtonType;
- (id)_axLayoutStar;
- (BOOL)_accessibilityActivateForPanAlternate:(BOOL)a0 isSecondAlternate:(BOOL)a1 isSecondaryActivate:(BOOL)a2;
- (BOOL)_accessibilityActivateForPanAlternate:(BOOL)a0 isSecondAlternate:(BOOL)a1;
- (BOOL)_axDisplaysGlobeKeyAsEmojiKey;
- (BOOL)_axIsDictationKey;
- (id)_accessibilityLocalizedStringForKeyboardLocale:(id)a0;
- (BOOL)_axIsShifted;
- (id)_axDualStringLabel;
- (BOOL)allowsCaseChangeOnShift;
- (BOOL)isUnaffectedByShiftLock;
- (void)_applyCapitalLetterTransform;
- (BOOL)_allowCachingAccessibilityLabel;
- (BOOL)_accessibilityIsDeleteKey;
- (BOOL)_accessibilityIsKeySelected;
- (id)initWithAccessibilityContainer:(id)a0 key:(id)a1;
- (BOOL)_performCapsLockDoubleTap;
- (BOOL)_accessibilityActivatePanAlternate:(id)a0;
- (id)_accessibilityKeyComponentName;
- (id)_accessibilityLayoutCursorKeyplaneComponentName;

@end
