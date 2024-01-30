@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

@property (readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;

@end
