@class PXPeopleFaceCropFetchOptions, PHFace, PHAsset;

@interface PXPeopleFaceCropRequest : NSObject

@property (readonly, nonatomic) PXPeopleFaceCropFetchOptions *options;
@property (retain, nonatomic) PHFace *face;
@property (retain, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) int faceCropRequestID;
@property (nonatomic) int imageManagerRequestID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedEdgeAdjustedCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } flippedNormalizedEdgeAdjustedCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedSmallFaceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } smallFaceRect;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenterEyeLine;
@property (readonly, nonatomic) BOOL canceled;

+ (int)generateUniqueRequestID;

- (void)cancel;
- (id)initWithFetchOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
