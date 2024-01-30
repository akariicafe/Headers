@class NSArray, AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    BOOL faceTrackingUsesFaceRecognition;
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
}

- (id)init;
- (void)dealloc;

@end
