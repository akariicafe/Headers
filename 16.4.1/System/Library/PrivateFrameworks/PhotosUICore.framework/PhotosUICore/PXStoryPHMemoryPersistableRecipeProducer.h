@class PHMemory, NSObject;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXStoryPHMemoryPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) PHMemory *memory;

+ (id)_persistableRecipeForMemory:(id)a0 keyAsset:(id)a1 miroDataUsed:(id *)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 keyAsset:(id)a1;
- (id)requestPersistableRecipeWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
