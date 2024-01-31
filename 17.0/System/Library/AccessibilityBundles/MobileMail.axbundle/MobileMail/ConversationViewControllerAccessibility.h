@interface ConversationViewControllerAccessibility : __ConversationViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityCustomRotors;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityFirstElementForFocus;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScrollAncestor;
- (void)_accessibilityPerformLeadingActionWithCell:(id)a0;
- (void)_accessibilitySetConversationViewInsets;
- (id)_accessibilityTitleForLeadingActionWithCell:(id)a0;
- (id)_axAutomaticallyMarkReadTimer;
- (void)_axCancelMarkAsReadTimer;
- (id)_axElementForFocusInCell:(id)a0 shouldAllowCollapsedCell:(BOOL)a1;
- (id)_axFirstVisibleCell;
- (id)_axFirstVisibleExpandedCell;
- (id)_axMessageSubjectView;
- (void)_axSetAutomaticallyMarkReadTimer:(id)a0;
- (void)_axSetSkipNextFocusOnMessage:(BOOL)a0;
- (void)_axSimulateTapArrowButtonWithDirection:(int)a0;
- (BOOL)_axSkipNextFocusOnMessage;
- (void)_scrollToInitialPosition;
- (void)_selectNextMessageCommandInvoked:(id)a0;
- (void)_selectPreviousMessageCommandInvoked:(id)a0;
- (void)_shrinkMessagesToBarButton:(id)a0 withInteraction:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateFooterViewFrameForCell:(id)a0 atIndexPath:(id)a1;
- (id)arrowControlsView;
- (void)arrowControlsView:(id)a0 didTapButtonWithDirection:(int)a1;
- (void)cancelAutomaticMarkAsReadForCellViewModel:(id)a0;
- (void)invalidateAutomaticMarkAsReadForAllMessages;
- (void)messageViewController:(id)a0 didTapRevealActionsButton:(id)a1;
- (void)scheduleAutomaticMarkAsReadForMessage:(id)a0;

@end
