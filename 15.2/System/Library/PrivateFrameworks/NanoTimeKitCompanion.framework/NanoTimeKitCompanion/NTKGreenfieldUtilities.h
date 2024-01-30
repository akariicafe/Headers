@interface NTKGreenfieldUtilities : NSObject

+ (void)generateFacePreviewImageFromUrl:(id)a0 completionBlock:(id /* block */)a1;
+ (id)encodeQueue;
+ (id)addBorder:(unsigned long long)a0 toWatchFaceImage:(id)a1;
+ (void)encodeRecipeFromDraftRecipe:(id)a0 completionBlock:(id /* block */)a1;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)a0 borderType:(unsigned long long)a1 completionBlock:(id /* block */)a2;
+ (id)_queue_snapshotFace:(id)a0 borderType:(unsigned long long)a1;
+ (id)_queue_encodeDraftRecipe:(id)a0;
+ (id)temporaryGreenfieldDirectory;
+ (id)_addGreyBorderToWatchFaceImage:(id)a0;
+ (id)_addGenericDeviceBorderToWatchFaceImage:(id)a0 includesTransparentPadding:(BOOL)a1;
+ (id)_greenfieldWatchFaceJsonForFace:(id)a0;
+ (id)_metadataDictForWatchFace:(id)a0 slotToSampleTemplateMapping:(id)a1 slotToItemIdMapping:(id)a2 slotToBundleIdMapping:(id)a3 watchFaceDataPath:(id)a4;
+ (void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)a0 face:(id)a1;
+ (id)createXPCServiceConnection;
+ (id)_decodeFaceFromDataPath:(id)a0;
+ (id)temporaryGreenfieldNoBordersSnapshotPath;
+ (id)_queue_greenfieldPreviewFromUrl:(id)a0;
+ (id)unzipWatchFaceFileAtUrl:(id)a0;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)validateFaceType:(id)a0 faceBundleId:(id)a1;
+ (void)decodeWatchFaceFromUrl:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)shouldAutoDismissViewControllerForAddFaceFlow:(id)a0;
+ (id)_companionAppIdFromWatchAppBundleId:(id)a0;
+ (BOOL)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)a0;

@end
