@class PHMemory, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryPHMemoryPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) PHMemory *memory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMemory:(id)a0;
- (id)writePersistableRecipe:(id)a0 assetEdits:(id)a1 resultHandler:(id /* block */)a2;

@end
