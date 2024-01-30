@class NSString, NSArray, NSData, VNImageAestheticsObservation, PFCameraMetadata;

@interface _PLIngestJobCameraMetadata : NSObject {
    BOOL _hasDeserializedMetadata;
    NSString *_cameraMetadataPath;
    NSString *_overCaptureMetadataPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _preferredCropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _acceptableCropRect;
    NSData *_sceneprintData;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
}

@property (readonly, nonatomic) PFCameraMetadata *cameraMetadata;
@property (readonly, nonatomic) PFCameraMetadata *overCaptureCameraMetadata;

- (void).cxx_destruct;
- (id)initWithCameraMetadataPath:(id)a0 overCaptureMetadataPath:(id)a1;
- (void)_deserializeCameraMetadata;
- (void)applyCameraMetadataToAsset:(id)a0;
- (void)applyCameraMetadataToSpatialOverCaptureAsset:(id)a0;

@end
