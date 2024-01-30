@class PHFace, NSString, PHObject, PHAsset, NSDate;

@interface PXFaceTileImageRequest : NSObject

@property (retain, nonatomic) PHFace *face;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) struct PXFaceTileImageParams { struct CGSize { double width; double height; } targetSize; unsigned long long cropFactor; unsigned long long style; BOOL cropBounded; } params;
@property int imageManagerRequestID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedActualFaceRect;
@property (nonatomic) struct CGSize { double width; double height; } lastDeliveredSize;
@property (retain, nonatomic) PHObject *originalRequestObject;
@property (retain, nonatomic) PHAsset *assetContainingFace;
@property BOOL fullResMissing;
@property BOOL canceled;
@property (copy, nonatomic) NSDate *ppt_requestStartDate;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0 cacheKey:(id)a1 params:(struct PXFaceTileImageParams { struct CGSize { double x0; double x1; } x0; unsigned long long x1; unsigned long long x2; BOOL x3; })a2;
- (void)ppt_reportMeasurementsForImageQuality:(long long)a0;

@end
