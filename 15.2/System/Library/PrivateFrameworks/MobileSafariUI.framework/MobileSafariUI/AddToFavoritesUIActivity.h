@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddToFavoritesUIActivity : TabDocumentActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

@property (weak, nonatomic) id<AddBookmarkActivityDelegate> delegate;

- (id)activityType;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;

@end
