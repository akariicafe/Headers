@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    BOOL _ignoreBookmarksFolderChangeNotifications;
}

@property (class, readonly, nonatomic) FrequentlyVisitedSitesController *sharedController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBookmarkCollection:(id)a0;
- (id)_canonicalizedFavoritesURLStringSet;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (id)frequentlyVisitedSites;
- (void)clearFrequentlyVisitedSites;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)a0;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)a0;
- (void)promoteFrequentlyVisitedSite:(id)a0 toFavoriteAtIndex:(unsigned long long)a1;
- (void)banFrequentlyVisitedSite:(id)a0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)a1;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)a0;
- (id)_existingIconsDataFromBookmarksDB;

@end
