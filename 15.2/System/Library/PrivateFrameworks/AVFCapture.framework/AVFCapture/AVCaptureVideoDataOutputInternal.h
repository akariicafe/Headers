@class NSArray, NSDictionary, AVWeakReference, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureVideoDataOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSDictionary *videoSettings;
    NSDictionary *clientVideoSettings;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
    BOOL automaticallyConfiguresOutputBufferDimensions;
    BOOL deliversPreviewSizedOutputBuffers;
    BOOL sceneStabilityMetadataEnabled;
    BOOL videoSettingsDimensionsOverrideEnabled;
    NSArray *availableVideoCVPixelFormatTypes;
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
}

- (id)init;
- (void)dealloc;

@end
