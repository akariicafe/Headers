@class NSMutableArray;

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor {
    NSMutableArray *_photos;
    BOOL _previewIsValid;
}

- (long long)photosCount;
- (void).cxx_destruct;
- (id)_writeTransientPhotosInto:(id)a0;
- (BOOL)addAssetsFromAssetList:(id)a0;
- (BOOL)addImageList:(id)a0;
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
