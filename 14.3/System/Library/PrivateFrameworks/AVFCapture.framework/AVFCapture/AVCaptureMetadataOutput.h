@class NSArray, NSString, AVCaptureMetadataOutputInternal, NSObject;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureMetadataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfInterest;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;
+ (id)_metadataConstantValueToName:(id)a0;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)init;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a0;
- (void)setFaceTrackingMaxFaces:(long long)a0;
- (void)dealloc;
- (void)setAppClipCodeMetadataObjectTypeAvailable:(BOOL)a0;
- (BOOL)isFaceTrackingUsesFaceRecognition;
- (BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (id)_metadataIdentifiers;
- (BOOL)isAppClipCodeMetadataSupported;
- (long long)faceTrackingMaxFaces;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (BOOL)isAppClipCodeMetadataObjectTypeAvailable;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isFaceTrackingSupported;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { } *)a0;
- (void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
- (BOOL)isFaceTrackingMetadataObjectTypesAvailable;
- (BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
- (BOOL)isVideoPreviewHistogramMetadataSupported;
- (void)setFaceTrackingUsesFaceRecognition:(BOOL)a0;

@end
