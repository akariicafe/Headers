@class NSMutableDictionary, NSDictionary, NSArray, CSListItem, NSString;
@protocol CSListItemContaining;

@interface CSListItemManager : NSObject <CSListItemManaging> {
    CSListItem *_nowPlayingItem;
}

@property (retain, nonatomic) NSMutableDictionary *identifiersToItems;
@property (retain, nonatomic) NSDictionary *identifiersToProviders;
@property (weak, nonatomic) id<CSListItemContaining> itemContainer;
@property (readonly, nonatomic) BOOL isPresentingSupplementaryContent;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (nonatomic) BOOL listHasNotificationContent;
@property (retain, nonatomic) CSListItem *nowPlayingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemManagerWithItemContainer:(id)a0;
+ (id)itemManagerWithItemContainer:(id)a0 itemProviders:(id)a1;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id /* block */)itemsGroupSortComparatorForListSectionIdentifier:(id)a0;
- (void)cancelTouchesForItem:(id)a0;
- (void)willPresentPosterSwitcher;
- (void)didAddNewSceneHostEnvironment;
- (id /* block */)itemsViewControllerSortComparatorForListSectionIdentifier:(id)a0;
- (void)restrictsTouches:(BOOL)a0 onHostedSceneOfContentHost:(id)a1;
- (void)restrictsTouchesOnAllHostedScenes:(BOOL)a0;
- (void)significantUserInteractionEndedForItem:(id)a0;
- (void)updateItem:(id)a0;
- (void)handleRemovedItemsWithContentHosts:(id)a0;
- (void)item:(id)a0 requestsAuthenticationAndPerformBlock:(id /* block */)a1;
- (void)supplementaryViewsContainer:(id)a0 requestsCancelTouches:(BOOL)a1 onSupplementaryViewController:(id)a2;
- (void)_restrictsTouches:(BOOL)a0 forSpecificContentHost:(id)a1;
- (void)item:(id)a0 requestsModalPresentationOfViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)_initWithItemContainer:(id)a0 itemProviders:(id)a1;
- (void)supplementaryViewsContainer:(id)a0 requestsCancelTouchesOnAllSupplementaryViewControllers:(BOOL)a1;
- (void).cxx_destruct;
- (void)significantUserInteractionBeganForItem:(id)a0;

@end
