@protocol DownloadOpenHandler, TabGroupProvider, _SFNavigationIntentHandling, BookmarksNavigationControllerDelegate, LinkPreviewProvider, LibraryItemOpenHandler;

@interface LibraryConfiguration : NSObject

@property (weak) id<DownloadOpenHandler> downloadOpenHandler;
@property (weak) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak) id<LibraryItemOpenHandler> libraryItemOpenHandler;
@property (weak) id<TabGroupProvider> tabGroupProvider;
@property (weak) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak) id<BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate;

- (void).cxx_destruct;

@end
