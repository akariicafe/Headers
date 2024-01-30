@protocol PLSyndicationSanitizedResourceGeneratorDelegate;

@interface PLSyndicationSanitizedResourceGenerator : NSObject

@property (readonly, weak, nonatomic) id<PLSyndicationSanitizedResourceGeneratorDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_generateAndStoreDerivativeResourcesForSyndicationResource:(id)a0 completion:(id /* block */)a1;
- (BOOL)_handleGenerateCompletionWithGenerateError:(id)a0 storedRecipes:(id)a1 sourceMetadata:(id)a2 targetRecipe:(id)a3 assetObjectID:(id)a4 managedObjectContext:(id)a5 timeZoneLookup:(id)a6 error:(id *)a7;
- (void)generateAndStoreDerivativeResourcesForSyndicationResource:(id)a0 completion:(id /* block */)a1;

@end
