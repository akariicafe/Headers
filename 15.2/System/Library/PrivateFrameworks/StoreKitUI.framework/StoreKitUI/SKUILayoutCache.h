@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

@interface SKUILayoutCache : NSObject {
    NSMutableArray *_batchedRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property (weak, nonatomic) id<SKUILayoutCacheDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)commitLayoutRequests;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })populateCacheWithLayoutRequests:(id)a0;
- (id)layoutForIndex:(long long)a0 forced:(BOOL)a1;
- (void)_layoutRequestsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_populateCache;
- (void)_addLayoutBatch:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })addLayoutRequests:(id)a0;
- (id)layoutForIndex:(long long)a0;

@end
