@class WBReadingListPrivate, NSObject;
@protocol OS_dispatch_queue;

@interface WBReadingList : NSObject {
    WBReadingListPrivate *_private;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (BOOL)supportsURL:(id)a0;
+ (id)defaultReadingList;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;
- (id)_init;

@end
