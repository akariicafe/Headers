@class NSMutableSet, NSString, NSSet, NSObject, PFMediaCapabilities, NSFileManager, PLPhotoLibrary, PLPTPdFormatConversionManager;
@protocol OS_dispatch_queue, PhotoLibraryPTPDelegate;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    PLPTPdFormatConversionManager *_formatConversionManager;
    NSSet *_availableAssetIDs;
    PLPhotoLibrary *_photoLibrary;
    int _libraryStatus;
    NSMutableSet *_ptpDeletedAssets;
    NSObject<OS_dispatch_queue> *availableAssetsQueue;
}

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (weak, nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_validateSize:(struct CGSize { double x0; double x1; })a0;
- (void)_registerForFirstUnlockNotification;
- (void)handlePhotoLibraryAvailableNotification;
- (void)ptpEnumerateAllAssetsUsingBlock:(id /* block */)a0;
- (id)ptpThumbnailForAssetHandle:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (id)ptpAssetReaderForAssetHandle:(id)a0;
- (id)adjustmentFilePathForAsset:(id)a0 requiresTemporaryFileCleanup:(BOOL *)a1;
- (id)ptpImagePropertiesForAssetHandle:(id)a0;
- (BOOL)ptpCanDeleteFiles;
- (id)assetReaderForFormatConvertedPTPAsset:(id)a0 ofManagedAsset:(id)a1 path:(id)a2;
- (BOOL)ptpDeletePhotoForAssetHandle:(id)a0;
- (void)_expungeAsset:(id)a0 withReason:(id)a1;
- (void)ptpEnumerateAssetsWithPrimaryKeys:(id)a0 usingBlock:(id /* block */)a1;
- (id)_ptpAssetsForAssetWithID:(id)a0;
- (BOOL)libraryIsAvailable;
- (id)_allAssetObjectIDs;
- (id)_ptpAssetEnumeratorAllAssets;
- (struct CGSize { double x0; double x1; })masterThumbSize;
- (BOOL)requestedSize:(struct CGSize { double x0; double x1; })a0 fitsInSourceSize:(struct CGSize { double x0; double x1; })a1;
- (id)_ptpThumbnailForOriginalWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (id)embeddedThumbnailDataForAsset:(id)a0 smallerThanDataLengthLimit:(unsigned long long)a1;
- (id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (id)_ptpThumbnailForOriginalVideoWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (id)_ptpThumbnailForSpatialOverCaptureImageWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (id)_ptpThumbnailForSpatialOverCaptureVideoWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (void)endSignpostForThumbnailGenerationForAsset:(id)a0;
- (id)_ptpThumbnailForPenultimateImageWithAssetID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(float)a2;
- (void)_inverseAffineTransformForExifOrientation:(long long)a0 width:(double)a1 height:(double)a2 completion:(id /* block */)a3;
- (void)_performTransactionAndWait:(id /* block */)a0;
- (id)dataForThumbnailFileAtPath:(id)a0 rotatedToOrientation:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 compressionQuality:(float)a3;
- (id)_generateThumbnailForAsset:(id)a0 fromOriginalImagePath:(id)a1 size:(struct CGSize { double x0; double x1; })a2 compressionQuality:(float)a3;
- (id)_performResultBlockAndWait:(id /* block */)a0;
- (id)_dataByJPEGCompressingCGImage:(struct CGImage { } *)a0 orSource:(struct CGImageSource { } *)a1 toLengthLimit:(long long)a2 initialCompressionQuality:(float)a3 size:(struct CGSize { double x0; double x1; })a4 orientation:(long long)a5;
- (void)beginSignpostForThumbnailGenerationForAsset:(id)a0 inputResourceTypeLabel:(id)a1;
- (void)_performBlockAndWait:(id /* block */)a0;
- (id)_performResultTransactionAndWait:(id /* block */)a0;
- (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)a0;
- (void)dealloc;
- (void)managedObjectContext:(id)a0 libraryChangedWithInsertedAssetIDs:(id)a1 deletedAssetIDs:(id)a2 changedAssetIDs:(id)a3 adjustedAssetIDs:(id)a4;

@end
