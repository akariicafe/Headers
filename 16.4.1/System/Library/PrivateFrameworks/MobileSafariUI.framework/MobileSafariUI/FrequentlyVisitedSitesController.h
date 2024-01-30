@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    BOOL _ignoreBookmarksFolderChangeNotifications;
}

@property (class, readonly, nonatomic) FrequentlyVisitedSitesController *sharedController;

- (void)clearFrequentlyVisitedSites;
- (id)_existingIconsDataFromBookmarksDB;
- (void)promoteFrequentlyVisitedSite:(id)a0 toFavoriteAtIndex:(unsigned long long)a1;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (id)initWithBookmarkCollection:(id)a0;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)a0;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)dealloc;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)a0;
- (id)frequentlyVisitedSites;
- (void)banFrequentlyVisitedSite:(id)a0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)a1;
- (void).cxx_destruct;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)a0;
- (id)_frequentlyVisitedSitesURLStringSet;

@end
