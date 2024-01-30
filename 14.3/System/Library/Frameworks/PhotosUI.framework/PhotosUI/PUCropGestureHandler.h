@class NUCropModel, NSObject;
@protocol PUCropGestureHandlerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface PUCropGestureHandler : NSObject {
    struct CGVector { double dx; double dy; } _panRubberBandDelta;
    struct CGVector { double dx; double dy; } _panSlideVelocity;
    NSObject<OS_dispatch_queue> *_animationQueue;
    NSObject<OS_dispatch_source> *_pitchYawRollAnimationTimer;
    NSObject<OS_dispatch_source> *_panAnimationTimer;
    NSObject<OS_dispatch_source> *_zoomAnimationTimer;
    struct { double scale; struct CGVector { double dx; double dy; } modelSpaceTranslation; } _panState;
    struct { double scale; } _pinchState;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startCropRect; } _pitchYawRollState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _panPinchStartRect;
    double _gestureStartPitch;
    double _gestureStartYaw;
    double _gestureStartRoll;
    int _pitchYawRollAnimationTimerCountdown;
    BOOL _inPanState;
    BOOL _inZoomState;
    BOOL _isDebugging;
    BOOL _isLogging;
    BOOL _delegateQueueIsMain;
    BOOL _animateEndGesture;
}

@property (weak) id<PUCropGestureHandlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property double maximumZoomScale;
@property (readonly, retain) NUCropModel *cropModel;
@property (readonly) struct CGVector { double dx; double dy; } panRubberBandOffset;
@property (readonly) double zoomOverflow;
@property (readonly) long long gesture;

- (void)setYawAngle:(double)a0;
- (void).cxx_destruct;
- (void)_setZoomScale:(double)a0;
- (void)reset;
- (void)setLoggingEnabled:(BOOL)a0;
- (void)beginPan;
- (struct CGSize { double x0; double x1; })masterImageSize;
- (void)setPitchAngle:(double)a0;
- (void)beginZoom;
- (id)delgateQueue;
- (double)_zoomScaleForModelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_zoomScaleForCurrentCropRectAndModelRect;
- (void)endZoomWithScale:(double)a0;
- (void)zoomWithScale:(double)a0;
- (void)panWithTranslation:(struct CGVector { double x0; double x1; })a0 velocity:(struct CGVector { double x0; double x1; })a1;
- (void)_didTrack;
- (void)endPanWithTranslation:(struct CGVector { double x0; double x1; })a0 velocity:(struct CGVector { double x0; double x1; })a1;
- (id)initWithCropModel:(id)a0;
- (void)setRollAngle:(double)a0;
- (void)setAnimateEndGestureEnabled:(BOOL)a0;
- (void)_setGestureTypePan;
- (void)_setGestureTypePinch;
- (void)_clearGestureTypePitchYawRoll;
- (void)_clearGestureTypePan;
- (void)_clearGestureTypePinch;
- (void)_dispatchSyncOnDelegateQueue:(id /* block */)a0;
- (void)_setGestureType:(long long)a0;
- (void)zoomWithScale:(double)a0 rubberband:(BOOL)a1;
- (void)_stopAnimatedZoomTimer;
- (void)_startPitchYawRollGestureTimeoutTimer;
- (void)_zoomWithScale:(double)a0 startCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_constrainedMoveCropRectBy:(struct CGVector { double x0; double x1; })a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rubberband:(BOOL)a2;
- (void)_stopAnimatedZoom;
- (void)_stopAnimatedPanTimer;
- (void)_stopAnimatedPan;

@end
