@class AVCaptureSession, NSString, AVCaptureVideoPreviewLayerInternal, AVCaptureConnection;

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) AVCaptureConnection *connection;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property (nonatomic) BOOL automaticallyAdjustsMirroring;
@property (nonatomic, getter=isMirrored) BOOL mirrored;

+ (void)initialize;
+ (id)layerWithSessionWithNoConnection:(id)a0;
+ (id)layerWithSession:(id)a0;

- (void)setCaptureDeviceTransformNeedsUpdate;
- (void)_updatePreviewTransforms;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUnoptimizedFilterRenderingEnabled:(BOOL)a0;
- (void)setSessionWithNoConnection:(id)a0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)isFilterRenderingEnabled;
- (unsigned int)imageQueueSlot;
- (void)centerSublayer:(long long)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)setSinkID:(id)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)layoutSublayers;
- (id)_input;
- (void)_updateDepthDataDeliverySupported;
- (id)initWithSessionWithNoConnection:(id)a0;
- (id)weakReference;
- (BOOL)isChromaNoiseReductionSupported;
- (BOOL)_filtersAreOptimized:(id)a0 exceptionReason:(id *)a1;
- (id)initWithSession:(id)a0;
- (int)changeSeed;
- (id)videoPreviewFilters;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })captureDeviceTransformForSensorSize:(struct CGSize { double x0; double x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1 sensorToPreviewVTScalingMode:(id)a2;
- (BOOL)_automaticallyAdjustsMirroring;
- (double)previewRotationDegrees;
- (id)_initWithSession:(id)a0 makeConnection:(BOOL)a1;
- (void)setFilterRenderingEnabled:(BOOL)a0;
- (BOOL)isChromaNoiseReductionEnabled;
- (void)_setSensorAndEstimatedPreviewSizes;
- (id)transformedMetadataObjectForMetadataObject:(id)a0;
- (BOOL)isDepthDataDeliverySupported;
- (void)removeConnection:(id)a0;
- (BOOL)_setVideoPreviewFilters:(id)a0 checkForExceptionalInput:(BOOL)a1 exceptionReason:(id *)a2;
- (BOOL)isDepthDataDeliveryEnabled;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)a0 imageQueue:(id)a1 rotationDegrees:(double)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setVideoPreviewFilters:(id)a0;
- (id)connectionMediaTypes;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isUnoptimizedFilterRenderingEnabled;
- (void)setChromaNoiseReductionEnabled:(BOOL)a0;
- (void)_updateCaptureDeviceTransform;
- (void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)bumpChangeSeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isMirrored;
- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)sinkID;
- (void)setDepthDataDeliveryEnabled:(BOOL)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (long long)_orientation;
- (void)setPaused:(BOOL)a0;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPaused;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithLayer:(id)a0;

@end
