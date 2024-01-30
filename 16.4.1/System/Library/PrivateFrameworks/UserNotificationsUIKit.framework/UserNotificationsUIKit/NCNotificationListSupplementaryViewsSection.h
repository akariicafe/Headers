@class NCNotificationListCache, NSSet, NSString, NCNotificationListView, NSArray, NSMutableArray, NSDictionary;
@protocol NCNotificationListSupplementaryViewsContainingDelegate, NCNotificationListBaseComponentDelegate;

@interface NCNotificationListSupplementaryViewsSection : NSObject <NCNotificationListViewDataSource, NCNotificationListSupplementaryViewsGroupDelegate, NCNotificationListSupplementaryViewsContaining, NCNotificationListBaseComponent>

@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (retain, nonatomic) NSMutableArray *orderedSupplementaryViewsGroups;
@property (retain, nonatomic) NCNotificationListView *listView;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<NCNotificationListBaseComponentDelegate> delegate;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NCNotificationListCache *notificationListCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationListSupplementaryViewsContainingDelegate> supplementaryContainerDelegate;
@property (readonly, nonatomic) unsigned long long supplementaryViewControllersCount;
@property (readonly, nonatomic) NSArray *groupingIdentifiers;
@property (readonly, nonatomic) NSDictionary *supplementaryViewControllersByGroupingIdentifiers;
@property (readonly, nonatomic) NSArray *supplementaryViewControllers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } allowedSupplementaryViewSize;
@property (copy, nonatomic) id /* block */ groupSortComparator;
@property (copy, nonatomic) id /* block */ viewControllerSortComparator;
@property (nonatomic) BOOL supportsViewGrouping;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)removeSupplementaryViewController:(id)a0;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (id)hostingPlatterViewForSupplementaryViewController:(id)a0;
- (void)updateSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (void)notificationListSupplementaryViewsGroup:(id)a0 cancelTouches:(BOOL)a1 onHostedViewController:(id)a2;
- (id)_logDescription;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)presentViewControllerModally:(id)a0 fromSupplementaryViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (unsigned long long)_sortedIndexForGroupingIdentifier:(id)a0;
- (void)updatePositionIfNeededForSupplementaryViewController:(id)a0;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)recycleView:(id)a0;
- (void)_updatePositionOfGroupAtIndex:(unsigned long long)a0;
- (unsigned long long)_indexOfExistingSupplementaryViewsGroupForGroupingIdentifier:(id)a0;
- (unsigned long long)_indexOfExistingSupplementaryViewsGroupForSupplementaryViewController:(id)a0;
- (id)init;
- (void)cancelTouchesOnHostedViews:(BOOL)a0;
- (void)collapseAllExpandedSupplementaryViewsGroups;
- (void)clearAll;
- (void)notificationListPresentableGroup:(id)a0 requestsScrollToTopOfCollectionWithCompletion:(id /* block */)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)insertSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAllowRestackingForNotificationListPresentableGroup:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
