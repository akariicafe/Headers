@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DDMessageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    NSMutableDictionary *_cache;
    NSMutableArray *_indexLRU;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeConversation:(id)a0;
- (void)_pruneIgnoringFirst:(BOOL)a0;
- (id)stringWithElement:(id)a0 conversationID:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;

@end
