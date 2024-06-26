@class SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler {
    SCNNode *_freeViewCameraNode;
    struct CGPoint { double x; double y; } _initialPoint;
    union C3DMatrix4x4 { float components[16]; void /* unknown type, empty encoding */ m[4]; struct { void /* unknown type, empty encoding */ columns[4]; } simd; } _initialMatrix;
    float _initialZoom;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    void /* unknown type, empty encoding */ _clickOrigin;
    int _lastGestureFingerCount;
    BOOL _isDraggingWithOneFinger;
    float _roll;
    union C3DMatrix4x4 { float components[16]; void /* unknown type, empty encoding */ m[4]; struct { void /* unknown type, empty encoding */ columns[4]; } simd; } _initialMatrixForRoll;
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    unsigned long long _stickyAxis;
    struct C3DSphere { void /* unknown type, empty encoding */ vector; } _viewedObjectSphere;
    unsigned char _isViewedObjectSphereComputed : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    unsigned char _enabled : 1;
    unsigned char _hasAutomaticCameraTarget : 1;
    unsigned char _automaticCameraTargetUpToDate : 1;
    unsigned char _inertia : 1;
    unsigned char _didEverFocusNode : 1;
    unsigned char _allowsTranslation : 1;
    unsigned char _pinchShouldMoveCamera : 1;
    unsigned char _alternateMode : 1;
    unsigned char _upDirIsSet : 1;
    unsigned char _gimbalLockMode : 1;
    unsigned char _inertiaRunning : 1;
    long long _browseMode;
    void /* unknown type, empty encoding */ _upDir;
    struct SCNVector3 { float x; float y; float z; } _cameraTarget;
    struct SCNVector3 { float x; float y; float z; } _autoCameraTarget;
    float _browseScaleFactor;
    double _friction;
    struct CGPoint { double x; double y; } _totalDragWithInertia;
    struct CGPoint { double x; double y; } _inertiaVelocity;
    double _lastSimulationTime;
}

@property BOOL gimbalLockMode;
@property struct SCNVector3 { float x0; float x1; float x2; } gimbalLockVector;
@property unsigned long long stickyAxis;
@property BOOL enableInertia;
@property double friction;
@property BOOL allowsTranslation;
@property BOOL automaticCameraTarget;
@property struct SCNVector3 { float x0; float x1; float x2; } cameraTarget;

+ (void /* unknown type, empty encoding */)frontVectorWithPointOfView:(id)a0;
+ (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })matrixWithNoRoll:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;

- (id)gestureRecognizers;
- (void)setZoomFactor:(double)a0;
- (void)_handlePinch:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (double)zoomFactor;
- (BOOL)enabled;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleDoubleTap:(id)a0;
- (id)init;
- (void)_handlePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)zoomBy:(float)a0;
- (void)_handlePress:(id)a0;
- (void)_setInertiaRunning:(BOOL)a0;
- (void)clearRoll;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)a0;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (BOOL)wantsRedraw;
- (void)setEnableFreeCamera:(BOOL)a0;
- (id)freeCamera;
- (void)activateFreeCamera;
- (void)invalidateCameraTarget;
- (void)_switchToFreeViewCamera;
- (void /* unknown type, empty encoding */)frontVector;
- (double)_browseScale;
- (void)_resetFreeViewCamera;
- (void)_prepareFreeViewCamera;
- (struct C3DSphere { })viewedObjectSphere;
- (void)updateBrowseScaleFactor;
- (BOOL)_freeCameraActivated;
- (void)_installFreeViewCameraIfNeeded;
- (void)computeAutomaticTargetPoint;
- (struct SCNVector3 { float x0; float x1; float x2; })cameraAutomaticTargetPoint;
- (void)zoomBy:(float)a0 animate:(BOOL)a1;
- (float)_translationCoef;
- (void)focusNode:(id)a0;
- (void)_resetBrowseScaleFactor;
- (void)_rotateWithDrag:(struct CGPoint { double x0; double x1; })a0 mode:(long long)a1 stickyAxis:(unsigned long long)a2;
- (BOOL)_isInertiaRunning;
- (void)_onInertiaTimer;
- (BOOL)_3DConnexionIsPressed;
- (BOOL)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode { } *)a0 sphere:(struct C3DSphere { } *)a1;
- (void)_handleRotation:(id)a0;
- (void)beginGesture:(id)a0;
- (void)pinchWithGestureRecognizer:(id)a0;
- (void)panWithGestureRecognizer:(id)a0;
- (void)rotateWithGestureRecognizer:(id)a0;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)_beginTranslateAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)endDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)_translateTo:(struct CGPoint { double x0; double x1; })a0;
- (void)rotateOf:(double)a0;
- (void)translateByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)rotateWithVector:(SEL)a0 mode:(long long)a1;

@end
