@class NSString, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate> {
    BOOL _reportsAbsoluteDpadValues;
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    unsigned char _directionPadButtonsState;
    BOOL _centerButtonPressed;
    long long _touchState;
    BOOL _leftBufferZone;
    BOOL _beganTouchOutsideBounds;
    float _previousButtonState;
    struct CGPoint { double x; double y; } _absoluteWindowLocation;
    struct CGPoint { double x; double y; } _absolutePosition;
    struct CGPoint { double x; double y; } _absoluteTouchDownPosition;
    struct CGPoint { double x; double y; } _relativePosition;
    GCControllerDirectionPad *_cardinalDpad;
    GCControllerButtonInput *_centerButton;
    BOOL _treatOnlyCenterRingAsButtonA;
    unsigned long long _owner;
    long long _deviceType;
}

@property (nonatomic) unsigned long long owner;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsRotation;
- (void)setAllowsRotation:(BOOL)a0;
- (id)productCategory;
- (struct CGPoint { double x0; double x1; })addCGPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)calculateRelativePositionWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(BOOL)a2;
- (id)centerButtonEvent:(id)a0 pressed:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })clampPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (BOOL)determineTouchStateWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(BOOL)a2;
- (void)digitizerTouchEvent:(id)a0 x:(double)a1 y:(double)a2 timestamp:(unsigned long long)a3 forceSkipDpadRotation:(BOOL)a4;
- (void)digitizerTouchUp:(id)a0 timestamp:(unsigned long long)a1 forceSkipDpadRotation:(BOOL)a2;
- (double)distanceBetweenCGPoint:(struct CGPoint { double x0; double x1; })a0 andCGPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)dpadDirectionEvent:(id)a0 direction:(unsigned long long)a1 pressed:(BOOL)a2;
- (double)magnitudeForCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })mulCGPoint:(struct CGPoint { double x0; double x1; })a0 byScalar:(double)a1;
- (struct CGPoint { double x0; double x1; })normalizeCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)ownershipClaimingElementsZero;
- (void)reportDigitizerChange:(id)a0;
- (void)reportDirectionpadChange:(id)a0 onQueue:(id)a1;
- (BOOL)reportsAbsoluteDpadValues;
- (struct CGPoint { double x0; double x1; })scaleCGPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (void)setDpad:(id)a0 digitizerX:(double)a1 digitizerY:(double)a2 touchDown:(BOOL)a3;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })subCGPoint:(struct CGPoint { double x0; double x1; })a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;

@end
