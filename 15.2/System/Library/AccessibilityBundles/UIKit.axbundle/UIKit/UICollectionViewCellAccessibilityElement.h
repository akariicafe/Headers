@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {
    BOOL _usingRealCell;
}

@property (retain, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)accessibilityElementDidLoseFocus;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)_accessibilityUserTestingVisibleAncestor;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (long long)accessibilityElementCount;
- (id)accessibilityLanguage;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityCanBecomeNativeFocused;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingProxyView;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
- (BOOL)_accessibilityIsAwayAlertElement;
- (id)automationCustomProperties;
- (BOOL)_accessibilityBackingElementIsValid;
- (long long)_accessibilityScannerActivateBehavior;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (void)_accessibilityPaste;
- (void)_accessibilitySelectAll;
- (void)_accessibilitySelect;
- (void)_accessibilityUndo;
- (void)_accessibilityRedo;
- (id)_accessibilitySemanticContextForElement:(id)a0;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDestructiveButton;
- (BOOL)_accessibilityUserTestingIsPreferredButton;

@end
