@class NSString, WebBookmarkList, ForYouRecommendationMediator, WebBookmark, NSMutableSet, BookmarkFavoritesGridView, NSObject, NSMutableArray, WebBookmarkCollection;
@protocol BookmarkFavoritesViewControllerDelegate, _SFNavigationIntentHandling, WBBookmarkProvider, OS_dispatch_queue, LinkPreviewProvider;

@interface BookmarkFavoritesViewController : UIViewController <BookmarkFavoritesGridViewDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController> {
    WebBookmarkCollection *_collection;
    id<WBBookmarkProvider> _bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderQueue;
    BookmarkFavoritesGridView *_favoritesGridView;
    WebBookmarkList *_favoritesList;
    BOOL _ignoreBookmarksFolderContentsDidChangeNotification;
    BOOL _showWhitelistFavorites;
    NSMutableSet *_changedBookmarkIDs;
    ForYouRecommendationMediator *_mediator;
    NSMutableArray *_currentSiriSuggestions;
    struct { BOOL contentDidBecomeDirty; BOOL contentInset; BOOL didTapOutside; BOOL favoritesGridViewLayoutType; BOOL isPresentedInsideBlankTab; BOOL provideContextResponseWithBlock; } _delegateFlags;
    BOOL _shouldUseOpaqueBackground;
    id<BookmarkFavoritesViewControllerDelegate> _delegate;
    id<LinkPreviewProvider> _linkPreviewProvider;
    id<_SFNavigationIntentHandling> _navigationIntentHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WebBookmark *folder;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_fetchHandoffResult;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)deleteBookmark:(id)a0 userInfo:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateImageForRecommendation:(id)a0;
- (void)loadView;
- (void)editBookmark:(id)a0 userInfo:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_scheduleHandoffApplicationUpdate:(id)a0;
- (void).cxx_destruct;
- (void)bookmark:(id)a0 didProduceNavigationIntent:(id)a1 userInfo:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)a0;
- (void)setScrollViewScrollsToTop:(BOOL)a0;
- (void)bookmarkFavoritesGridView:(id)a0 getChildCountForBookmarkFoldersInParent:(int)a1 completionHandler:(id /* block */)a2;
- (void)bookmarkFavoritesGridView:(id)a0 getChildCountForBookmarkFolder:(int)a1 completionHandler:(id /* block */)a2;
- (long long)bookmarkFavoritesGridViewLayoutType:(id)a0;
- (void)bookmarkFavoritesGridViewDidReceiveTapOutside:(id)a0;
- (void)bookmarkFavoritesGridViewContentChanged:(id)a0;
- (id)bookmarkFavoritesGridView:(id)a0 contextMenuConfigurationWithIdentifier:(id)a1 forBookmark:(id)a2;
- (id)bookmarkFavoritesGridView:(id)a0 contextMenuConfigurationWithIdentifier:(id)a1 forSiriSuggestion:(id)a2;
- (void)bookmarkFavoritesGridView:(id)a0 willCommitPreviewViewController:(id)a1;
- (void)bookmarkFavoritesGridView:(id)a0 didSelectBookmark:(id)a1;
- (void)bookmarkFavoritesGridView:(id)a0 didSelectRecommendation:(id)a1;
- (void)bookmarkFavoritesGridViewWillDismissLinkPreview:(id)a0;
- (void)bookmarkFavoritesGridView:(id)a0 didSelectActionButton:(id)a1 forSiriSuggestion:(id)a2;
- (BOOL)bookmarkFavoritesGridViewIsPresentedInsideBlankTab:(id)a0;
- (void)bookmarkFavoritesGridView:(id)a0 dropBookmarkWithCoordinator:(id)a1;
- (BOOL)bookmarkFavoritesGridView:(id)a0 canHandleDropSession:(id)a1;
- (void)bookmarkFavoritesGridView:(id)a0 didToggleExpansionForSection:(long long)a1 expanded:(BOOL)a2;
- (void)_receivedFrequentlyVisitedSitesDidChangeNotification:(id)a0;
- (void)_updateSiriSuggestions:(id)a0;
- (void)_receivedBookmarksReloadOrSpecialFolderChangeNotification:(id)a0;
- (void)bookmarkFavoritesGridView:(id)a0 promoteFrequentlyVisitedSite:(id)a1 toFavoriteAtIndex:(unsigned long long)a2;
- (BOOL)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(id)a0;
- (void)bookmarkFavoritesGridView:(id)a0 banFrequentlyVisitedSite:(id)a1;

@end
