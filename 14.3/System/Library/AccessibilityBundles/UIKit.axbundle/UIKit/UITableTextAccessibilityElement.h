@interface UITableTextAccessibilityElement : UIAccessibilityElement {
    SEL _selector;
}

@property (weak, nonatomic) id textDelegate;
@property (weak, nonatomic) id attributeDelegate;

- (BOOL)canBecomeFocused;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilityCustomActionGroupIdentifier;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (void).cxx_destruct;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityRespondsToUserInteraction;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsInTableCell;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityLocalizedStringKey;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)accessibilityUserInputLabels;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityScrollStatus;
- (id)accessibilityIdentifier;
- (id)accessibilityLanguage;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
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
- (id)_accessibilityEquivalenceTag;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityUseElementAtPositionAfterActivation;
- (id)_tableViewCellTextDelegate;
- (id)_tableViewCellAttributeDelegate;

@end
