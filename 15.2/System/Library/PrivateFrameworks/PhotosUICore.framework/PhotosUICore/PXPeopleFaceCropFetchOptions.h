@class PHFace, PHAsset, PHPhotoLibrary, PHPerson;

@interface PXPeopleFaceCropFetchOptions : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } clientTargetSize;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFace *face;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetPixelSize;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) long long cropFactor;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL shouldCacheResult;
@property (nonatomic) BOOL wantsSmallFaceRect;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)_deliveryModeStringForDeliveryMode:(long long)a0;
+ (id)_cornerStyleStringForCornerStyle:(long long)a0;
+ (id)_cropFactorStringForCropFactor:(long long)a0;

- (id)description;
- (id)initWithPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFace:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
- (id)initWithPerson:(id)a0 face:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3;
- (void)_commonInitWithPerson:(id)a0 face:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3;
- (BOOL)areFetchParametersEqualtoFetchParametersOfOptions:(id)a0;

@end
