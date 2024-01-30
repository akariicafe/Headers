@class PHAsset;

@interface PUPhotoPickerScaledFileSizeEstimator : NSObject {
    struct FigPhotoDecompressionContainer { } *_figContainer;
}

@property (readonly, nonatomic) PHAsset *asset;

+ (BOOL)isAssetResizable:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)wouldResizeAssetUsingResizeDescriptor:(id)a0;
- (unsigned long long)estimatedSizeForResizeDescriptor:(id)a0;
- (id)_assetUTI;
- (id)initWithAsset:(id)a0;
- (struct FigPhotoDecompressionContainer { } *)_figContainer;
- (unsigned long long)_assetOriginalSize;
- (struct CGSize { double x0; double x1; })_targetSizeForResizeDescriptor:(id)a0;
- (unsigned long long)_estimatedSizeForResizeDescriptor:(id)a0;
- (id)_assetURL;

@end
