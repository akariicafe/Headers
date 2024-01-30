@interface UITableTextAccessibilityElement : UIAccessibilityElement {
    SEL _selector;
    id textDelegate;
    id attributeDelegate;
}

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (BOOL)canBecomeFocused;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (id)accessibilityLocalizedStringKey;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLanguage;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (BOOL)_accessibilityIsInTableCell;
- (id)_accessibilityAllDropPointDescriptors;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityCustomActionGroupIdentifier;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityElementServesAsHeadingLandmark;
- (id)_accessibilityEquivalenceTag;
- (void *)_accessibilityGetBlockForAttribute:(long long)a0;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (long long)_accessibilityScannerActivateBehavior;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (id)_accessibilityScrollStatus;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityUseElementAtPositionAfterActivation;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;

@end
