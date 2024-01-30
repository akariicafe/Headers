@class BookmarkFolderLibraryItemController, ReadingListLibraryItemController, HistoryLibraryItemController;

@interface MainLibrarySectionController : LibrarySectionController {
    HistoryLibraryItemController *_historyController;
    ReadingListLibraryItemController *_readingListController;
    BookmarkFolderLibraryItemController *_bookmarksItemController;
}

- (id)title;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)itemControllers;
- (void)updateToolbarIfNeeded;
- (void)registerItemsWithRegistration:(id)a0;

@end
