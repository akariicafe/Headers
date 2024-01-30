@class WebBookmarksXPCConnection;

@interface WBReadingListPrivate : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;

@end
