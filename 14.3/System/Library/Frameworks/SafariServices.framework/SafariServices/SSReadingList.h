@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection *_connection;
}

+ (BOOL)supportsURL:(id)a0;
+ (id)defaultReadingList;

- (void)_setUpConnectionIfNeeded;
- (BOOL)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;
- (id)_init;

@end
