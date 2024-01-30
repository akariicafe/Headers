@class TabController, ContinuousReadingItem;

@interface ContinuousReadingController : NSObject {
    TabController *_tabController;
    int _activeDocumentBookmarkID;
    ContinuousReadingItem *_currentContinuousItem;
    ContinuousReadingItem *_nextContinuousItem;
    ContinuousReadingItem *_previousContinuousItem;
}

@property (nonatomic) BOOL unreadReadingListItemsOnly;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_tabDocument;
- (void)_clearCachedItems;
- (void)_updateCachedItemsIfNeeded;
- (id)_itemAtIndex:(unsigned int)a0 inReadingList:(id)a1;
- (id)initWithTabController:(id)a0;
- (id)currentReadingListItem;
- (id)nextReadingListItem;
- (id)previousReadingListItem;

@end
