@interface TUIPredictionViewCellAccessibility : __TUIPredictionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)_childFocusViews;
- (id)_accessibilityRoleDescription;
- (BOOL)_accessibilityInTopLevelTabLoop;
- (unsigned int)_accessibilitySlotID;
- (void)_axActivateSpeaking:(id)a0;
- (id)_axCandidate;
- (BOOL)_axHideCell;
- (BOOL)_axIsAutoFillKey;
- (BOOL)_axIsAutocorrection;

@end
