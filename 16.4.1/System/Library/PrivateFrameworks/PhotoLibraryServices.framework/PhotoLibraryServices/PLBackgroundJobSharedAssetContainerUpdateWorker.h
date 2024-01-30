@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_transactionIteratorSinceTokenIfValid:(id)a0 library:(id)a1 error:(id *)a2;
+ (void)_setLastProcessingToken:(id)a0 library:(id)a1;
+ (id)_suggestionsContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)performWorkOnAllItemsInContext:(id)a0 withError:(id *)a1;
+ (BOOL)_updateSharingCompositionForMemoriesContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)_lastProcessingTokenFromLibrary:(id)a0;
+ (id)_memoriesContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)_isTokenInvalidError:(id)a0;
+ (BOOL)_updateSharingCompositionForSuggestionsContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
