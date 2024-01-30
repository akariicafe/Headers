@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

@property (weak, nonatomic) id<AddBookmarkActivityDelegate> delegate;

- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
