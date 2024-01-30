@class AVCaptureAudioDataOutputInternal, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureAudioDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *audioSettings;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;

- (id)connectionMediaTypes;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (id)init;
- (void)dealloc;
- (id)supportedAssetWriterOutputFileTypes;
- (void)_handleConfigurationLiveEventForID:(long long)a0 updatedFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (void)_handleSampleBufferEventForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)a0;

@end
