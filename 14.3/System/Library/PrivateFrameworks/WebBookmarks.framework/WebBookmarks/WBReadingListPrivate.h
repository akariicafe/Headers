@class WebBookmarksXPCConnection;

@interface WBReadingListPrivate : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (void)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
