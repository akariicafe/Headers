@class CALayer;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _primaryCaptureRectLock;
    struct CGPoint { double x; double y; } _primaryCaptureRectCenterPoint;
    double _primaryCaptureRectAspectRatio;
    long long _primaryCaptureRectUniqueID;
    BOOL _havePendingPrimaryCaptureRectChange;
    BOOL _primaryAndOverCaptureCompositingEnabled;
    long long _overCaptureStatus;
    BOOL _isPresentationLayer;
    BOOL _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    double _lastAspectCenterUpdateTime;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } primaryCaptureRectCenterPoint;
@property (readonly, nonatomic) double primaryCaptureRectAspectRatio;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryCaptureRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overCaptureRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) BOOL primaryAndOverCaptureCompositingEnabled;
@property (readonly, nonatomic) long long overCaptureStatus;
@property (nonatomic) BOOL automaticallyDimsOverCaptureRegion;

+ (long long)uniqueID;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)layoutSublayers;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })captureDeviceTransformForSensorSize:(struct CGSize { double x0; double x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1 sensorToPreviewVTScalingMode:(id)a2;
- (id)_initWithSession:(id)a0 makeConnection:(BOOL)a1;
- (void)removeConnection:(id)a0;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)a0 imageQueue:(id)a1 rotationDegrees:(double)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint { double x0; double x1; } *)a0 aspectRatio:(double *)a1 uniqueID:(long long *)a2;
- (long long)primaryCaptureRectUniqueID;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleSpatialNotification:(id)a0 payload:(id)a1;
- (id)initWithLayer:(id)a0;

@end
