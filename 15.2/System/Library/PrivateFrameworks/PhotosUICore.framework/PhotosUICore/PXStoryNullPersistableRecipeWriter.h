@class NSError;

@interface PXStoryNullPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)writePersistableRecipe:(id)a0 assetEdits:(id)a1 resultHandler:(id /* block */)a2;

@end
