@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection *_connection;
}

+ (BOOL)supportsURL:(id)a0;
+ (id)defaultReadingList;

- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (BOOL)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;
- (void)_setUpConnectionIfNeeded;

@end
