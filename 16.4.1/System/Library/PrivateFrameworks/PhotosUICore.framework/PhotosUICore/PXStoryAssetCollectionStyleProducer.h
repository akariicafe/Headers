@class NSObject;
@protocol OS_dispatch_queue, PXDisplayAssetCollection;

@interface PXStoryAssetCollectionStyleProducer : NSObject <PXStoryStylesProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)requestStylesWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
