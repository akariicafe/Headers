@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

@property (readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (id)activityTitle;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (id)activityType;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;

@end
