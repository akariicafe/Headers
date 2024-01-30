@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {
    BOOL _usingRealCell;
}

@property (retain, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (BOOL)isAccessibilityElement;
- (void)_accessibilityPaste;
- (void)_accessibilityCut;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (void).cxx_destruct;
- (void)_accessibilityCopy;
- (void)_accessibilityRedo;
- (id)_accessibilitySemanticContextForElement:(id)a0;
- (void)dealloc;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityRespondsToUserInteraction;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySetNativeFocus;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDestructiveButton;
- (BOOL)_accessibilityUserTestingIsPreferredButton;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)accessibilityElementCount;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityIsScannerGroup;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (id)accessibilityLanguage;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)_accessibilityUserTestingProxyView;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilitySelect;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityCanBecomeNativeFocused;
- (id)accessibilityValue;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
- (void)_accessibilityUndo;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityBackingElementIsValid;
- (void)_accessibilitySelectAll;
- (long long)_accessibilityScannerActivateBehavior;
- (BOOL)_accessibilityIsOutsideParentBounds;
- (id)realCell;

@end
