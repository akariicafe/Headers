@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    BOOL _ignoreBookmarksFolderChangeNotifications;
}

@property (class, readonly, nonatomic) FrequentlyVisitedSitesController *sharedController;

- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)banFrequentlyVisitedSite:(id)a0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)a1;
- (id)_existingIconsDataFromBookmarksDB;
- (void)dealloc;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)a0;
- (void)promoteFrequentlyVisitedSite:(id)a0 toFavoriteAtIndex:(unsigned long long)a1;
- (id)_canonicalizedFavoritesURLStringSet;
- (BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)a0;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (void)clearFrequentlyVisitedSites;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (id)initWithBookmarkCollection:(id)a0;
- (id)frequentlyVisitedSites;

@end
