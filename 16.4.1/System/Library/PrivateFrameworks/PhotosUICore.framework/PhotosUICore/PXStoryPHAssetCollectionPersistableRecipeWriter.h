@class PHAssetCollection, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryPHAssetCollectionPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)writePersistableRecipe:(id)a0 assetEdits:(id)a1 undoManager:(id)a2 resultHandler:(id /* block */)a3;

@end
