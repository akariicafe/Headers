@class NSString, ReadingListViewController;

@interface ReadingListLibraryItemController : LibraryItemController <ReadingListViewControllerDelegate> {
    ReadingListViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSpringLoaded;
- (id)viewController;
- (void).cxx_destruct;
- (BOOL)selectionFollowsFocus;
- (void)updateListContentConfiguration:(id)a0;
- (id)_bookmarksNavigationControllerDelegate;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (void)readingListViewController:(id)a0 setBookmark:(id)a1 asRead:(BOOL)a2;
- (void)readingListViewController:(id)a0 updateUnreadFilterShowingAllBookmarks:(BOOL)a1;
- (id)readingListViewControllerCurrentReadingListItem:(id)a0;

@end
