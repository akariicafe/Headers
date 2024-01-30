@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

@interface SKUILayoutCache : NSObject {
    NSMutableArray *_batchedRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property (weak, nonatomic) id<SKUILayoutCacheDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)layoutForIndex:(long long)a0;
- (void)_addLayoutBatch:(id)a0;
- (void)_layoutRequestsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_populateCache;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })addLayoutRequests:(id)a0;
- (void)commitLayoutRequests;
- (id)layoutForIndex:(long long)a0 forced:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })populateCacheWithLayoutRequests:(id)a0;

@end
