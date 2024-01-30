@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;
@protocol _SFSingleBookmarkNavigationControllerDelegate;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    BOOL _delegateNotifiedOfResult;
    BOOL _bookmarkCollectionLocked;
}

@property (weak, nonatomic) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)a0 childBookmarks:(id)a1 inCollection:(id)a2 addingBookmark:(BOOL)a3 toFavorites:(BOOL)a4;
- (void)_releaseBookmarkLockIfNeeded;
- (void)bookmarkInfoViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (void)dealloc;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)a0;
- (id)initWithBookmark:(id)a0 inCollection:(id)a1;
- (id)initWithFolderOfBookmarks:(id)a0 inCollection:(id)a1;
- (id)initForAddingToFavoritesInCollection:(id)a0;
- (id)addBookmarkWithTitle:(id)a0 address:(id)a1 parentBookmark:(id)a2;
- (BOOL)prepareForPresentationForAddingBookmark:(BOOL)a0;
- (id)initWithCollection:(id)a0;
- (id)_lastSelectedFolder;
- (void)viewDidDisappear:(BOOL)a0;

@end
