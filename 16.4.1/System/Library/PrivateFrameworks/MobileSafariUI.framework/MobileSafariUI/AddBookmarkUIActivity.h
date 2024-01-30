@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

@property (weak, nonatomic) id<AddBookmarkActivityDelegate> delegate;

- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;

@end
