@class PLThumbnailManager, NSMutableDictionary;

@interface PLBackgroundJobLockedResourceWorker : PLBackgroundJobWorker {
    PLThumbnailManager *_thumbnailManager;
    NSMutableDictionary *_userInfo;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (void)_accessFileForAsset:(id)a0 cplResourceType:(unsigned long long)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3 resourceType:(unsigned int)a4 utiString:(id)a5 bundleScope:(unsigned short)a6 pathManager:(id)a7 mode:(unsigned char)a8 handler:(id /* block */)a9;
+ (BOOL)_isRecoveringFromTransferForAsset:(id)a0 pathManager:(id)a1 mainMarkerURLIfExists:(id *)a2 lockedMarkerURLIfExists:(id *)a3;
+ (BOOL)_removeFilesForAsset:(id)a0 inBundleScope:(unsigned short)a1 pathManager:(id)a2;
+ (void)recoverFromInterruptedJobWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)_cloneResource:(id)a0 asset:(id)a1 destinationBundleScope:(unsigned short)a2 pathManager:(id)a3 sourceURL:(id *)a4 destinationURL:(id *)a5 error:(id *)a6;
- (BOOL)_cloneResourceWithCPLResourceType:(unsigned long long)a0 version:(unsigned int)a1 recipeID:(unsigned int)a2 resourceType:(unsigned int)a3 utiString:(id)a4 asset:(id)a5 destinationBundleScope:(unsigned short)a6 pathManager:(id)a7 sourceURL:(id *)a8 destinationURL:(id *)a9 error:(id *)a10;
- (BOOL)_eraseTableThumbnailAtIndex:(long long)a0 managedObjectContext:(id)a1 pathManager:(id)a2;

@end
