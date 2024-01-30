@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection *_connection;
}

+ (id)defaultReadingList;
+ (BOOL)supportsURL:(id)a0;

- (id)_init;
- (id)init;
- (void)_setUpConnectionIfNeeded;
- (void).cxx_destruct;
- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;
- (BOOL)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;

@end
