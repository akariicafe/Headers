@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

@property (readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (id)activityType;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
