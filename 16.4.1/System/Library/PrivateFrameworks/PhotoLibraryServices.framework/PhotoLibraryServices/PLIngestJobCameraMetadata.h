@class NSString, NSArray, NSData, VNImageAestheticsObservation, PFCameraMetadata, NSDictionary;

@interface PLIngestJobCameraMetadata : NSObject {
    BOOL _hasDeserializedMetadata;
    NSString *_cameraMetadataPath;
    NSString *_overCaptureMetadataPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _preferredCropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _acceptableCropRect;
    NSData *_sceneprintData;
    NSArray *_junkImageClassificationObservations;
    VNImageAestheticsObservation *_imageAestheticsObservation;
    NSDictionary *_smartCamInfo;
    NSArray *_contactIDsInProximity;
    long long _sharedLibraryMode;
}

@property (retain, nonatomic) PFCameraMetadata *cameraMetadata;
@property (retain, nonatomic) PFCameraMetadata *overCaptureCameraMetadata;

+ (BOOL)faceObservationIngestDisabled;
+ (BOOL)facePrintIngestDisabled;

- (id)initWithCameraMetadataPath:(id)a0 overCaptureMetadataPath:(id)a1;
- (void)applyCameraMetadataToAsset:(id)a0;
- (void)applyCameraMetadataToSpatialOverCaptureAsset:(id)a0;
- (void)_ingestCameraMetadata;
- (void)deserializeCameraMetadata;
- (void).cxx_destruct;

@end
