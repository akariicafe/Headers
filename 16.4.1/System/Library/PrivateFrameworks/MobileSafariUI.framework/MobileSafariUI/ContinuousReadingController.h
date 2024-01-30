@class TabController, ContinuousReadingItem;

@interface ContinuousReadingController : NSObject {
    TabController *_tabController;
    int _activeDocumentBookmarkID;
    ContinuousReadingItem *_currentContinuousItem;
    ContinuousReadingItem *_nextContinuousItem;
    ContinuousReadingItem *_previousContinuousItem;
}

@property (nonatomic) BOOL unreadReadingListItemsOnly;

- (id)initWithTabController:(id)a0;
- (id)_tabDocument;
- (void)dealloc;
- (void)_clearCachedItems;
- (id)previousReadingListItem;
- (id)nextReadingListItem;
- (id)currentReadingListItem;
- (void)_updateCachedItemsIfNeeded;
- (id)_itemAtIndex:(unsigned int)a0 inReadingList:(id)a1;
- (void).cxx_destruct;

@end
