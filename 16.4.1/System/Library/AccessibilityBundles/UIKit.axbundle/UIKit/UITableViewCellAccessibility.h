@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super {
    BOOL _accessibilityIsFetchingChildren;
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)selectAll:(id)a0;
- (void)_didRemoveSubview:(id)a0;
- (BOOL)_isEligibleForFocusInteraction;
- (void)_didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)cut:(id)a0;
- (void)paste:(id)a0;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)setAccessoryView:(id)a0;
- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityElements;
- (void)copy:(id)a0;
- (id)accessibilityUserInputLabels;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)preferredFocusedView;
- (id)_accessoryViewForType:(long long)a0;
- (id)_checkmarkImage:(BOOL)a0;
- (void)_setPopupMenuButton:(id)a0;
- (void)_setShowingDeleteConfirmation:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (BOOL)accessibilityElementIsFocused;
- (id)accessibilityHeaderElements;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)didTransitionToState:(unsigned long long)a0;
- (void)editControlWasClicked:(id)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setShowingDeleteConfirmation:(BOOL)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilitySupplementaryHeaderViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityHasTextOperations;
- (double)_accessibilityAllowedGeometryOverlap;
- (double)_accessibilityAllowedGeometryOverlapX;
- (void)_accessibilityClearChildren;
- (long long)_accessibilityCompareElement:(id)a0 toElement:(id)a1;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityIndexPath;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (BOOL)_accessibilityIsDescendantOfElement:(id)a0;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityIsTableCell;
- (id)_accessibilityKeyCommands;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityParentTableView;
- (BOOL)_accessibilityRespondsToUserInteractionForElement:(id)a0;
- (id)_accessibilityScannerGroupElements;
- (BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)a0;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilityShouldSetNativeFocusWhenATVFocused;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)a0;
- (BOOL)_accessibilityUseElementAtPositionAfterActivation;
- (long long)_accessibilityUserTestingChildrenCount;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (id)_privateAccessibilityCustomActions;
- (BOOL)accessibilityScrollToVisible;
- (BOOL)_accessibilityIgnoreInternalLabels;
- (id)tableTextAccessibleLabel:(id)a0;
- (BOOL)_accessibilityAlwaysReturnsChild;
- (id)_accessibilityCellEditingControl;
- (id)_accessibilityChildren;
- (BOOL)_accessibilityAvoidsMockViewContainers;
- (id)_accessibilityCellReorderControl;
- (BOOL)_accessibilityHandleDetailButtonPress:(id)a0;
- (BOOL)_accessibilityHandleReorderMoveDown;
- (void)_accessibilityHandleReorderMoveDownWithFocus;
- (BOOL)_accessibilityHandleReorderMoveUp;
- (BOOL)_accessibilityHandleReorderMoveUp:(BOOL)a0;
- (void)_accessibilityHandleReorderMoveUpWithFocus;
- (void)_accessibilityKeyCommandActionMinus;
- (void)_accessibilityKeyCommandActionPlus;
- (BOOL)_accessibilityLabelShouldBeDistinct:(id)a0;
- (id)_accessibilityMockParent;
- (id)_accessibilityPerformableActions;
- (id)_accessibilityRetrieveTableViewCellText;
- (id)_accessibilityRetrieveTableViewCellTextWithLocalizationOptions:(long long)a0 shouldExcludeDetailText:(BOOL)a1;
- (id)_accessibilityRetrieveTableViewIvarsText;
- (BOOL)_accessibilityShouldSortTableViewCellChildren;
- (id)_accessibilityStepperAccessory;
- (BOOL)_accessibilitySwipeActionsAllowed;
- (BOOL)_accessibilityTableViewCellHidesInsertControl;
- (BOOL)_accessibilityTableViewCellSubclassShouldExist;
- (id)_accessibilityTableViewSwitch;
- (id)_accessibilityTextElementText;
- (BOOL)_accessibilityUsesOverrideContainerProtocol;
- (id)_axGetFocusedSubview;
- (BOOL)_axPerformAction:(id)a0;
- (void)_axSetFocusedSubview:(id)a0;
- (void)_axSetShouldForceRefreshChildren:(BOOL)a0;
- (BOOL)_axShouldForceRefreshChildren;
- (void)deleteConfirmationControlWasCancelled:(id)a0;
- (void)deleteConfirmationControlWasClicked:(id)a0;
- (void)registerMockChild:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tableTextAccessibleFrame:(id)a0;
- (id)tableTextAccessibleLocalizationBundleID:(id)a0;
- (id)tableTextAccessibleLocalizationBundlePath:(id)a0;
- (id)tableTextAccessibleLocalizedTableName:(id)a0;
- (id)tableTextAccessibleStringKey:(id)a0;
- (void)unregisterMockChild:(id)a0;

@end
