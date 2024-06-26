@class MKTiltGestureRecognizer, MKCompassView, _MKZoomingGestureControlConfiguration, VKDynamicAnimation, UILongPressGestureRecognizer, NSString, MKBasicMapView, MKScaleView, VKCompoundAnimation, _MKConditionalPanRotationGestureRecognizer, UIPanGestureRecognizer, _MKConditionalPanTiltGestureRecognizer, _UIInterruptScrollDecelerationGestureRecognizer, UIPinchGestureRecognizer, _MKDirectionalArrowRecognizer, UIGestureRecognizer, VKTimedAnimation, MKRotationFilter, _MKConditionalPanZoomGestureRecognizer, _MKOneHandedZoomGestureRecognizer, UITraitCollection, UIRotationGestureRecognizer, _MKUserInteractionGestureRecognizer, UITapGestureRecognizer, MKVariableDelayTapRecognizer;
@protocol MKMapGestureControllerDelegate;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate> {
    _MKOneHandedZoomGestureRecognizer *_oneHandedZoomGestureRecognizer;
    _MKZoomingGestureControlConfiguration *_zoomConfiguration;
    struct CGPoint { double x; double y; } _panRotateStartPoint;
    struct CGPoint { double x; double y; } _panZoomStartPoint;
    UIPanGestureRecognizer *_scaleDragGestureRecognizer;
    _MKConditionalPanRotationGestureRecognizer *_conditionalPanRotationGestureRecognizer;
    _MKConditionalPanZoomGestureRecognizer *_conditionalPanZoomGestureRecognizer;
    _MKConditionalPanTiltGestureRecognizer *_conditionalPanTiltGestureRecognizer;
    _UIInterruptScrollDecelerationGestureRecognizer *_gestureInterruptionRecognizer;
    _MKDirectionalArrowRecognizer *_activeArrowGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowRotateGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowPanGestureRecognizer;
    VKTimedAnimation *_currentArrowAnimation;
    double _arrowZoomSpeed;
    double _arrowZoomStartTimestamp;
    double _pinchFactorAverageInGesture;
    double _lastPinchUpdateTimestamp;
    double _lastScale;
    VKDynamicAnimation *_pinchDecelerationAnimation;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _gestureCount;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    VKDynamicAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    VKDynamicAnimation *_tiltDecelerationAnimation;
    BOOL _didStartLongPress;
    BOOL _isPanning;
    BOOL _isPinching;
    UITraitCollection *_traitCollection;
    double _lastZoomPanTranslation;
    struct CGPoint { double x; double y; } _scrollTranslation;
    struct CGPoint { double x; double y; } _lastArrowScrollTranslationDelta;
    BOOL _isFullRotatingFromArrows;
    double _lastRotationInGestureDelta;
    double _lastRotation;
}

@property (readonly, nonatomic) MKBasicMapView *mapView;
@property (weak, nonatomic) id<MKMapGestureControllerDelegate> delegate;
@property (retain, nonatomic) MKScaleView *scaleView;
@property (retain, nonatomic) MKCompassView *compassView;
@property (retain, nonatomic) MKRotationFilter *rotationFilter;
@property (nonatomic) BOOL rotationSnappingEnabled;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
@property (nonatomic, getter=isTiltEnabled) BOOL tiltEnabled;
@property (nonatomic) BOOL panWithMomentum;
@property (readonly, nonatomic) MKVariableDelayTapRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearGestureRecognizersInFlight;
- (void)_setTraitCollection:(id)a0;
- (void)handleTouch:(id)a0;
- (BOOL)keyDown:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithMapView:(id)a0 gestureTargetView:(id)a1 doubleTapTargetView:(id)a2;
- (void)handleArrowZoom:(id)a0;
- (void)_handleStandardTilt:(id)a0;
- (void)handleTwoFingerLongPress:(id)a0;
- (void)handlePinch:(id)a0;
- (void)handlePanZoom:(id)a0;
- (void)cancelZoomInOrOut;
- (void)_clearGesture:(id)a0;
- (BOOL)tiltGestureRecognizerShouldBegin:(id)a0;
- (void)_handleZoomPan:(id)a0;
- (BOOL)keyUp:(id)a0;
- (void)stopUserInteractionFromExternalGesture;
- (void)_handleInterrupt:(id)a0;
- (void).cxx_destruct;
- (void)_updateRotationGestureForState:(long long)a0 focusPoint:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 velocity:(double)a3;
- (void)endGesturing;
- (void)zoomOut;
- (void)handleTilt:(id)a0;
- (void)stopDynamicAnimations;
- (void)handleZoomArrowMask:(long long)a0 speed:(double)a1;
- (void)handleTwoFingerTap:(id)a0;
- (void)handleArrowPan:(id)a0;
- (void)_updateZoomGestureForState:(long long)a0 focusPoint:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 velocity:(double)a3 gestureType:(long long)a4 configuration:(id)a5;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)variableDelayTapRecognizer:(id)a0 shouldWaitForNextTapForDuration:(double)a1 afterTouch:(id)a2;
- (void)startUserInteractionFromExternalGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)zoomIn;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_snapPointToDevicePixels:(struct CGPoint { double x0; double x1; })a0;
- (void)_setOneHandedZoomGestureConfiguration:(id)a0;
- (void)beginGesturing;
- (void)handleDoubleTap:(id)a0;
- (void)gestureRecognizerTouchesCanceled:(id)a0;
- (void)handlePan:(id)a0;
- (void)handleArrowRotate:(id)a0;
- (void)_handleRotationPan:(id)a0;
- (void)gestureRecognizerTouchesBegan:(id)a0;
- (void)handleRotation:(id)a0;
- (id)initWithMapView:(id)a0 gestureTargetView:(id)a1;
- (void)gestureRecognizerTouchesEnded:(id)a0;

@end
