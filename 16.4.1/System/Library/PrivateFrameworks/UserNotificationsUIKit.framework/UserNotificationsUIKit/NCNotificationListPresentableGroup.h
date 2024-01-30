@class NCNotificationListCell, NSSet, NCNotificationListCoalescingHeaderCell, NCNotificationListView, NCNotificationListCoalescingControlsCell, NSString, NCNotificationListCache;
@protocol NCNotificationListPresentableGroupDelegate;

@interface NCNotificationListPresentableGroup : NSObject <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationListViewDataSource, NCNotificationListBaseComponent, MTMaterialGrouping, NCNotificationListCellActionHandling>

@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (retain, nonatomic) NCNotificationListView *groupListView;
@property (retain, nonatomic) NCNotificationListCoalescingHeaderCell *headerView;
@property (retain, nonatomic) NCNotificationListCoalescingControlsCell *footerView;
@property (nonatomic) double headerViewHeight;
@property (nonatomic) double footerViewHeight;
@property (retain, nonatomic) NCNotificationListCell *cellWithActionsRevealed;
@property (readonly, nonatomic, getter=isGrouped) BOOL grouped;
@property (weak, nonatomic) id<NCNotificationListPresentableGroupDelegate> delegate;
@property (readonly, nonatomic) NSString *headerText;
@property (readonly, nonatomic) NSString *clearAllText;
@property (retain, nonatomic) NCNotificationListCache *notificationListCache;
@property (nonatomic) BOOL shouldImmediatelyReveal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)notificationListCell:(id)a0 didBeginRevealingActionsForSwipeInteraction:(id)a1;
- (id)headerViewForNotificationList:(id)a0;
- (void)_scrollToTopIfNecessaryAndPerformBlock:(id /* block */)a0;
- (id)footerViewForNotificationList:(id)a0;
- (id)_legibilitySettings;
- (void)toggleGroupedState;
- (void)notificationListCell:(id)a0 didBeginHidingActionsForSwipeInteraction:(id)a1;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)recycleView:(id)a0;
- (void)clearAll;
- (BOOL)adjustForContentSizeCategoryChange;
- (double)headerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void).cxx_destruct;
- (void)_didSignificantInteraction;
- (BOOL)_shouldAllowRestacking;
- (BOOL)actionsRevealedForNotificationListCell:(id)a0;
- (id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCell:(id)a0 didMoveToNewXPosition:(double)a1;
- (void)notificationListCellDidSignificantUserInteraction:(id)a0;
- (void)notificationListCoalescingControlsHandler:(id)a0 didTransitionToClearState:(BOOL)a1;
- (void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)a0;
- (void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)a0;
- (void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)a0;
- (void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)a0;
- (double)notificationListView:(id)a0;
- (void)setGrouped:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldPerformClippingForNotificationListCell:(id)a0;

@end
