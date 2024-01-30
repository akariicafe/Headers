@class NSCache, NSMutableDictionary, NSMutableArray;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor {
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    BOOL _previewIsValid;
}

@property (readonly, nonatomic) long long photosCount;

- (void).cxx_destruct;
- (id)_copyOrTranscodePhotosTo:(id)a0;
- (id)_fetchAssetsForNewPhotos:(id)a0;
- (void)_fetchAssetsForPickedPhotos;
- (void)_readPickedPhotosFrom:(id)a0;
- (void)_reinitializeWithImageList:(id)a0 andResourceDirectory:(id)a1;
- (BOOL)addAssetsFromAssetList:(id)a0;
- (BOOL)addAssetsFromAssetList:(id)a0 maxPhotosCount:(unsigned long long)a1;
- (BOOL)addPhotosFromUIImagePicker:(id)a0;
- (BOOL)canChangeOriginalCropOfPhotoAtIndex:(long long)a0;
- (void)deletePhotoAtIndex:(long long)a0;
- (void)finalizeWithCompletion:(id /* block */)a0;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)a0;
- (void)imageAndCropForPhotoAtIndex:(long long)a0 completion:(id /* block */)a1;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)a0 completion:(id /* block */)a1;
- (id)initWithResourceDirectory:(id)a0 forDevice:(id)a1;
- (BOOL)isPhotoInPhotoLibraryAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })minimumNormalizedCropSizeForPhotoAtIndex:(long long)a0;
- (void)movePhotoAtIndex:(long long)a0 toIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalCropForPhotoAtIndex:(long long)a0;
- (BOOL)setOriginalCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPhotoAtIndex:(long long)a1;

@end
