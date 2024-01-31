@interface UITableTextAccessibilityElement : UIAccessibilityElement {
    SEL _selector;
    id textDelegate;
    id attributeDelegate;
}

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)description;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (id)accessibilityLocalizedStringKey;
- (void *)_accessibilityGetBlockForAttribute:(long long)a0;
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
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_accessibilityIsInTableCell;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityCustomActionGroupIdentifier;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityElementServesAsHeadingLandmark;
- (id)_accessibilityEquivalenceTag;
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
