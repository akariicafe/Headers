@class AVCaptureDeviceInput, AVCaptureInputPort, AVWeakReference, NSArray, NSString, AVCaptureDevice, NSMutableArray;

@interface AVCaptureConnectionInternal : NSObject {
    NSMutableArray *inputPorts;
    AVCaptureDeviceInput *sourceDeviceInput;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    BOOL hasActiveObservers;
    BOOL active;
    BOOL enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    AVCaptureInputPort *depthDataInputPort;
    AVCaptureInputPort *visionDataInputPort;
    AVCaptureInputPort *pointCloudDataInputPort;
    AVCaptureInputPort *cameraCalibrationDataInputPort;
    BOOL videoMirroringSupported;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    BOOL videoOrientationSupported;
    long long videoOrientation;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMaxFrameDuration;
    double videoMaxScaleAndCropFactor;
    double videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    long long preferredVideoStabilizationMode;
    BOOL videoStabilizationEnabled;
    long long activeVideoStabilizationMode;
    BOOL hasVideoMinFrameDurationObserver;
    NSString *connectionID;
    BOOL cameraIntrinsicMatrixDeliverySupported;
    BOOL cameraIntrinsicMatrixDeliveryEnabled;
    BOOL livePhotoMetadataWritingEnabled;
    BOOL debugMetadataSidecarFileEnabled;
    NSArray *supportedVideoMirroringMethodsForMovieRecording;
    long long videoMirroringMethodForMovieRecording;
    BOOL videoZoomSmoothingSupported;
    BOOL videoZoomSmoothingEnabled;
    BOOL videoGreenGhostMitigationSupported;
    BOOL videoGreenGhostMitigationEnabled;
    BOOL videoDeviceOrientationCorrectionSupported;
    BOOL videoDeviceOrientationCorrectionEnabled;
}

@end
