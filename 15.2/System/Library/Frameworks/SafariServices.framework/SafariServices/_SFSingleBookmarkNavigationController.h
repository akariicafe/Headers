@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;
@protocol _SFSingleBookmarkNavigationControllerDelegate;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    BOOL _delegateNotifiedOfResult;
    BOOL _bookmarkCollectionLocked;
    BOOL _needsBookmarksLockOnAppResume;
}

@property (weak, nonatomic) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;
@property (copy, nonatomic) id /* block */ addBookmarkAnalyticsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)dealloc;
- (id)_lastSelectedFolder;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (id)_initWithBookmark:(id)a0 childBookmarks:(id)a1 inCollection:(id)a2 addingBookmark:(BOOL)a3 toFavorites:(BOOL)a4;
- (void)_releaseBookmarkLockIfNeeded;
- (BOOL)prepareForPresentationForAddingBookmark:(BOOL)a0;
- (void)bookmarkInfoViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)a0;
- (id)initWithBookmark:(id)a0 inCollection:(id)a1;
- (id)initWithFolderOfBookmarks:(id)a0 inCollection:(id)a1;
- (id)initForAddingToFavoritesInCollection:(id)a0;
- (id)addBookmarkWithTitle:(id)a0 address:(id)a1 parentBookmark:(id)a2;

@end
