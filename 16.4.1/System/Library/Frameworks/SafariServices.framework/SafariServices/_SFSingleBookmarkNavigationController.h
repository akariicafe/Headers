@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;
@protocol _SFSingleBookmarkNavigationControllerDelegate, TabGroupProvider;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    BOOL _delegateNotifiedOfResult;
    BOOL _bookmarkCollectionLocked;
    BOOL _needsBookmarksLockOnAppResume;
}

@property (weak, nonatomic) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;
@property (copy, nonatomic) id /* block */ addBookmarkAnalyticsHandler;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCollection:(id)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_didBecomeActive;
- (void)_willResignActive;
- (id)_initWithBookmark:(id)a0 childBookmarks:(id)a1 inCollection:(id)a2 withSyntheticFolder:(id)a3 addingBookmark:(BOOL)a4 toFavorites:(BOOL)a5;
- (id)_lastSelectedFolder;
- (void)_releaseBookmarkLockIfNeeded;
- (id)addBookmarkWithTitle:(id)a0 address:(id)a1 parentBookmark:(id)a2;
- (void)bookmarkInfoViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)a0;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (id)initForAddingToFavoritesInCollection:(id)a0;
- (id)initForAddingToSyntheticBookmarkFolder:(id)a0;
- (id)initWithBookmark:(id)a0 inCollection:(id)a1;
- (id)initWithFolderOfBookmarks:(id)a0 inCollection:(id)a1;
- (BOOL)prepareForPresentationForAddingBookmark:(BOOL)a0;
- (id)tabGroupProviderForBookmarkInfoViewController:(id)a0;

@end
