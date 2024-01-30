@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PXCachingCountManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSCache *cache;

- (void).cxx_destruct;
- (id)init;
- (void)requestCountForAssetCollection:(id)a0 fetchOptions:(id)a1 resultHandler:(id /* block */)a2;

@end
