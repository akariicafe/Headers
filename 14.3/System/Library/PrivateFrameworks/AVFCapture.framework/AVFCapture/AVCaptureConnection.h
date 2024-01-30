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
+ (id)connectionWithInputPorts:(id)a0 output:(id)a1;
+ (id)connectionWithInputPort:(id)a0 videoPreviewLayer:(id)a1;

- (int)changeSeed;
- (void)bumpChangeSeed;
- (id)mediaType;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (BOOL)sourcesFromFrontFacingCamera;
- (void)_updatePropertiesForFormat:(id)a0;
- (void)inputPortFormatDescriptionChanged:(id)a0;
- (void)setVideoMirroringMethodForMovieRecording:(long long)a0;
- (id)session;
- (BOOL)isVideoMinFrameDurationSet;
- (unsigned int)clientRetainedBufferCount;
- (void)updateAudioLevelsArray;
- (void)dealloc;
- (int)videoRetainedBufferCountHint;
- (id)sourceDevice;
- (BOOL)isDebugMetadataSidecarFileEnabled;
- (void)setVideoRetainedBufferCountHint:(int)a0;
- (BOOL)isVideoMaxFrameDurationSet;
- (void)setLivePhotoMetadataWritingEnabled:(BOOL)a0;
- (BOOL)_updateCameraIntrinsicMatrixDeliverySupported;
- (float)getPeakAudioLevelForChannel:(id)a0;
- (long long)videoMirroringMethodForMovieRecording;
- (void)setupInternalStorage;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_videoMaxFrameDuration;
- (void)_setVideoMirrored:(BOOL)a0;
- (BOOL)isTrulyDisabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_videoMinFrameDuration;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)a0 allConnections:(id)a1;
- (id)description;
- (id)supportedVideoMirroringMethodsForMovieRecording;
- (long long)_resolveActiveVideoStabilizationMode:(long long)a0 format:(id)a1;
- (float)getAvgAudioLevelForChannel:(id)a0;
- (void)_setVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithInputPort:(id)a0 videoPreviewLayer:(id)a1;
- (id)initWithInputPorts:(id)a0 output:(id)a1;
- (void)_updateActiveVideoStabilizationMode:(long long)a0 bumpChangeSeed:(BOOL)a1;
- (void)setDebugMetadataSidecarFileEnabled:(BOOL)a0;
- (void)updateAudioChannelsArray;
- (void)setupObservers;
- (BOOL)livePhotoMetadataWritingEnabled;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)a0;
- (BOOL)isLivePhotoMetadataWritingSupported;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isLive;
- (void)_updateSupportedVideoMirroringMethodsForMovieRecording;
- (void)teardownObservers;
- (void)_setActive:(BOOL)a0;

@end
