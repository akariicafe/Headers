@interface UITableTextAccessibilityElement : UIAccessibilityElement {
    SEL _selector;
    id textDelegate;
    id attributeDelegate;
}

- (void)accessibilityElementDidBecomeFocused;
- (BOOL)canBecomeFocused;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityRespondsToUserInteraction;
- (void)accessibilityElementDidLoseFocus;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)_accessibilityUserTestingVisibleAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityUserInputLabels;
- (id)accessibilityLanguage;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilityIsInTableCell;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsSpeakThisElement;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilitySupportsActivateAction;
- (void *)_accessibilityGetBlockForAttribute:(long long)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityElementServesAsHeadingLandmark;
- (id)_accessibilityCapturedImages;
- (BOOL)_accessibilityIsAwayAlertElement;
- (long long)_accessibilityScannerActivateBehavior;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityUseElementAtPositionAfterActivation;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilityCustomActionGroupIdentifier;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;

@end
