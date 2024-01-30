@class NSArray, NSDictionary, NSString, NSObject, AVCaptureVideoDataOutputInternal;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic) BOOL automaticallyConfiguresOutputBufferDimensions;
@property (nonatomic) BOOL deliversPreviewSizedOutputBuffers;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)removeConnection:(id)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)init;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a0;
- (void)dealloc;
- (void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)a0 sessionPreset:(id)a1;
- (id)vettedVideoSettingsForSettingsDictionary:(id)a0 connection:(id)a1;
- (id)supportedVideoSettingsKeys;
- (id)outputScalingModeForSourceFormat:(id)a0;
- (id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)a0 connection:(id)a1;
- (id)supportedAssetWriterOutputFileTypes;
- (void)_setMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)a0;
- (BOOL)isVideoSettingsDimensionsOverrideEnabled;
- (void)setVideoSettingsDimensionsOverrideEnabled:(BOOL)a0;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)a0;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)a0;
- (id)recommendedVideoSettingsForVideoCodecType:(id)a0 assetWriterOutputFileType:(id)a1;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)hasRequiredOutputFormatForConnection:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (unsigned int)requiredOutputFormatForConnection:(id)a0;
- (BOOL)updateVideoSettingsForConnection:(id)a0;

@end
