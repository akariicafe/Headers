@interface RoomPlan.RoomCaptureCoachingOverlayView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ directionalLightDirection;
    void /* unknown type, empty encoding */ dollHouseARView;
    void /* unknown type, empty encoding */ dollHouse;
    void /* unknown type, empty encoding */ isModelEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitchAdjustment;
    void /* unknown type, empty encoding */ arcBallCamera;
    void /* unknown type, empty encoding */ runtimeScaleAdjustment;
    void /* unknown type, empty encoding */ completionMargin;
    void /* unknown type, empty encoding */ scaleAdjustment;
    void /* unknown type, empty encoding */ arGlyphView;
    void /* unknown type, empty encoding */ floorEntity;
    void /* unknown type, empty encoding */ coachingLabel;
    void /* unknown type, empty encoding */ coachingLabelContainer;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ immediateLongPressRecognizer;
    void /* unknown type, empty encoding */ directionalDebugEntity;
    void /* unknown type, empty encoding */ cameraTransform;
    void /* unknown type, empty encoding */ currentInstruction;
    void /* unknown type, empty encoding */ currentInitializationState;
    void /* unknown type, empty encoding */ sceneObserver;
    void /* unknown type, empty encoding */ ambientLight;
    void /* unknown type, empty encoding */ directionalLight;
    void /* unknown type, empty encoding */ lightingAnchor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugBBCornerEntity;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)didPanWithPanGesture:(id)a0;
- (void)didPinchWithPinchGesture:(id)a0;
- (void)didTouchDownWithLongPressGesture:(id)a0;

@end
