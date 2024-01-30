@class NTKPhoto, UIImage, PHAsset;

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor {
    NTKPhoto *_pickedPhoto;
    UIImage *_pickedImage;
    PHAsset *_newAsset;
    UIImage *_newImage;
}

@property (readonly, nonatomic) long long photosCount;

+ (id)_fetchAssetForPhoto:(id)a0;

- (void).cxx_destruct;
- (void)_readPickedPhoto;
- (void)_reinitializeWithPhoto:(id)a0 image:(id)a1;
- (void)finalizeWithCompletion:(id /* block */)a0;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)a0;
- (void)imageForPhotoWithCompletion:(id /* block */)a0;
- (id)initWithResourceDirectory:(id)a0 forDevice:(id)a1;
- (void)setAsset:(id)a0 completion:(id /* block */)a1;
- (void)setPhoto:(id)a0 completion:(id /* block */)a1;
- (void)setRawImage:(id)a0 completion:(id /* block */)a1;

@end
