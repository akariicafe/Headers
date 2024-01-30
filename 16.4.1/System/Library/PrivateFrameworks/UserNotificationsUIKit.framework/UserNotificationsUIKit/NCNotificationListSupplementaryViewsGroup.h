@class NSString, NSMutableArray, NSArray;
@protocol NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsGroupDelegate;

@interface NCNotificationListSupplementaryViewsGroup : NCNotificationListPresentableGroup <NCNotificationListSupplementaryHostingViewControllerDelegate, NCNotificationListCellActionProviding>

@property (retain, nonatomic) NSMutableArray *orderedCells;
@property (weak, nonatomic) id<NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsGroupDelegate> delegate;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSArray *supplementaryViewControllers;
@property (readonly, copy, nonatomic) NSArray *hostingViewControllers;
@property (copy, nonatomic) id /* block */ viewControllerSortComparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentableTypes;

- (id)supplementaryActionsForNotificationListCell:(id)a0;
- (void)removeSupplementaryViewController:(id)a0;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (id)hostingPlatterViewForSupplementaryViewController:(id)a0;
- (void)updateSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (unsigned long long)_sortedIndexForViewController:(id)a0;
- (id)defaultActionForNotificationListCell:(id)a0;
- (BOOL)shouldContinuePresentingActionButtonsForNotificationListCell:(id)a0;
- (id)_configurationForCell:(id)a0;
- (void)_updateHostingViewController:(id)a0 cell:(id)a1 withConfiguration:(id)a2;
- (id)_logDescription;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)notificationListCell:(id)a0 didBeginRevealingActionsForSwipeInteraction:(id)a1;
- (id)_cellAtIndex:(unsigned long long)a0;
- (id)_clearActionForCell:(id)a0;
- (BOOL)shouldVerticallyStackActionButtonsForNotificationListCell:(id)a0;
- (unsigned long long)_existingIndexMatchingSupplementaryViewController:(id)a0;
- (void)toggleGroupedState;
- (void)updatePositionIfNeededForSupplementaryViewController:(id)a0;
- (void)notificationListCell:(id)a0 didBeginHidingActionsForSwipeInteraction:(id)a1;
- (id)headerText;
- (BOOL)shouldShowDefaultActionForNotificationListCell:(id)a0;
- (id)_supplementaryViewControllerAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)supplementaryHostingViewControllerPreferredContentSizeChanged:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)_matchStyleOfCell:(id)a0 toHostingViewController:(id)a1;
- (BOOL)shouldImmediatelyReveal;
- (id)_hostingViewControllerForCell:(id)a0;
- (void)recycleView:(id)a0;
- (void)_removeSupplementaryViewControllerAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)_indexOfHostingViewController:(id)a0;
- (id)_configurationAtIndex:(unsigned long long)a0;
- (BOOL)shouldShowSupplementaryActionsForNotificationListCell:(id)a0;
- (void)_updateUserInteraction;
- (BOOL)containsSupplementaryViewController:(id)a0;
- (void)clearAll;
- (BOOL)_shouldAllowHostedViewControllersUserInteraction;
- (void)_updateSupplementaryViewController:(id)a0 withConfiguration:(id)a1 existingIndex:(unsigned long long)a2 proposedIndex:(unsigned long long)a3;
- (void)_clearCell:(id)a0;
- (void)supplementaryHostingViewControllerWasTapped:(id)a0;
- (void)insertSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)_hostingViewControllerAtIndex:(unsigned long long)a0;
- (id)clearAllText;

@end
