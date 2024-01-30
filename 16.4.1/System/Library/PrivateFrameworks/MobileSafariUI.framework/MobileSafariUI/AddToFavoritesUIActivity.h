@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddToFavoritesUIActivity : TabDocumentActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

@property (weak, nonatomic) id<AddBookmarkActivityDelegate> delegate;
@property (nonatomic) BOOL isForPerTabGroupFavorites;

- (id)activityTitle;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (id)activityType;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (id)_embeddedActivityViewController;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;

@end
