@class NSArray, AVCaptureConnectionInternal, AVCaptureVideoPreviewLayer, AVCaptureOutput;

@interface AVCaptureConnection : NSObject {
    AVCaptureConnectionInternal *_internal;
}

@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) AVCaptureOutput *output;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSArray *audioChannels;
@property (readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property (nonatomic) long long videoOrientation;
@property (readonly, nonatomic, getter=isVideoFieldModeSupported) BOOL supportsVideoFieldMode;
@property (nonatomic) long long videoFieldMode;
@property (readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDuration;
@property (readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMaxFrameDuration;
@property (readonly, nonatomic) double videoMaxScaleAndCropFactor;
@property (nonatomic) double videoScaleAndCropFactor;
@property (nonatomic) long long preferredVideoStabilizationMode;
@property (readonly, nonatomic) long long activeVideoStabilizationMode;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;
@property (readonly, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;
@property (nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isCameraIntrinsicMatrixDeliverySupported) BOOL cameraIntrinsicMatrixDeliverySupported;
@property (nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) BOOL cameraIntrinsicMatrixDeliveryEnabled;

+ (void)initialize;
+ (id)connectionWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
+ (id)connectionWithInputPorts:(id)a0 output:(id)a1;

- (void)_updatePropertiesForFormat:(id)a0;
- (void)setVideoMirroringMethodForMovieRecording:(long long)a0;
- (void)bumpChangeSeed;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)setupInternalStorage;
- (void)_updateActiveVideoStabilizationMode:(long long)a0 bumpChangeSeed:(BOOL)a1;
- (id)session;
- (BOOL)isVideoMinFrameDurationSet;
- (void)updateAudioLevelsArray;
- (id)mediaType;
- (int)changeSeed;
- (id)sourceDevice;
- (BOOL)_updateCameraIntrinsicMatrixDeliverySupported;
- (BOOL)isTrulyDisabled;
- (void)teardownObservers;
- (void)_setVideoMirrored:(BOOL)a0;
- (void)setDebugMetadataSidecarFileEnabled:(BOOL)a0;
- (unsigned int)clientRetainedBufferCount;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (id)sourceDeviceInput;
- (float)getPeakAudioLevelForChannel:(id)a0;
- (int)videoRetainedBufferCountHint;
- (void)updateAudioChannelsArray;
- (id)initWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
- (BOOL)isVideoMaxFrameDurationSet;
- (BOOL)sourcesFromFrontFacingCamera;
- (id)description;
- (void)setLivePhotoMetadataWritingEnabled:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_videoMinFrameDuration;
- (void)setVideoRetainedBufferCountHint:(int)a0;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)a0 allConnections:(id)a1;
- (long long)videoMirroringMethodForMovieRecording;
- (BOOL)isLivePhotoMetadataWritingSupported;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_videoMaxFrameDuration;
- (id)initWithInputPorts:(id)a0 output:(id)a1;
- (void)_setActive:(BOOL)a0;
- (BOOL)isDebugMetadataSidecarFileEnabled;
- (void)_setVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateSupportedVideoMirroringMethodsForMovieRecording;
- (id)supportedVideoMirroringMethodsForMovieRecording;
- (long long)_resolveActiveVideoStabilizationMode:(long long)a0 format:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setupObservers;
- (BOOL)isLive;
- (float)getAvgAudioLevelForChannel:(id)a0;
- (void)dealloc;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)a0;
- (void)inputPortFormatDescriptionChanged:(id)a0;
- (BOOL)livePhotoMetadataWritingEnabled;

@end
