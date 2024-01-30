@class NSError;

@interface PXStoryNullPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)writePersistableRecipe:(id)a0 assetEdits:(id)a1 undoManager:(id)a2 resultHandler:(id /* block */)a3;

@end
