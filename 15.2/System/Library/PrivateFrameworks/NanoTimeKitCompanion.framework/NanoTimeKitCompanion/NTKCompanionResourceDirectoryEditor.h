@class NSString, CLKDevice;

@interface NTKCompanionResourceDirectoryEditor : NSObject {
    BOOL _resourceDirectoryIsHardLink;
}

@property (retain, nonatomic) NSString *resourceDirectory;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *galleryPreviewResourceDirectory;
@property (readonly, nonatomic) CLKDevice *device;

+ (id)_linkPhoto:(id)a0 to:(id)a1 previewOnly:(BOOL)a2;
+ (id)_transcodeAsset:(id)a0 withCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 into:(id)a2 previewOnly:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })_watchPhotoImageSize;
+ (id)_videoAssetOf:(id)a0;
+ (struct CGSize { double x0; double x1; })_watchPhotoVideoSize;
+ (id)_subsampledImageWithData:(id)a0 orientation:(long long)a1 subsampleFactor:(unsigned long long)a2;
+ (void)_imageDataForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)_createResourceDirectoryWithAsset:(id)a0 assetCollection:(id)a1 forDevice:(id)a2 previewOnly:(BOOL)a3;
+ (id)_writeAsset:(id)a0 image:(id)a1 withImageCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 to:(id)a3;
+ (id)_scaleImage:(id)a0 toLongestEdgeInPixels:(double)a1;
+ (id)_cropAndScaleUIImage:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)_transcodeStillImageOf:(id)a0 forPhoto:(id)a1 withCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 into:(id)a3;
+ (BOOL)_transcodeIrisVideoOf:(id)a0 forPhoto:(id)a1 withCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 into:(id)a3 previewOnly:(BOOL)a4;
+ (void)_imageForAsset:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (unsigned long long)_subsampleFactorForScale:(double)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResourceDirectory:(id)a0 forDevice:(id)a1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)a0;
- (void)finalizeWithCompletion:(id /* block */)a0;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;

@end
