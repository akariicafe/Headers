@class NSString, PHFetchResult, LPApplePhotosMomentMetadata, PHPhotoLibrary;

@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver> {
    BOOL _cancelled;
    int _pendingImageRequest;
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_keyAssetFetch;
    PHFetchResult *_anyAssetFetch;
    LPApplePhotosMomentMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)fail;
- (void)start;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)didFetchAsset:(id)a0;
- (void)completeWithMetadata:(id)a0;

@end
