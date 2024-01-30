@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {
    BOOL _usingRealCell;
}

@property (retain, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLanguage;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)_accessibilityBackingElementIsValid;
- (BOOL)_accessibilityCanBecomeNativeFocused;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityHasNativeFocus;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityPaste;
- (void)_accessibilityRedo;
- (long long)_accessibilityScannerActivateBehavior;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (id)_accessibilitySemanticContextForElement:(id)a0;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilityUndo;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsDestructiveButton;
- (BOOL)_accessibilityUserTestingIsPreferredButton;
- (id)_accessibilityUserTestingProxyView;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (id)automationCustomProperties;

@end
