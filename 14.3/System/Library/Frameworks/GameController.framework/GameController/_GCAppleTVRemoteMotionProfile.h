@class GCController, CMMotionManager;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {
    struct { double x; double y; double z; } _gravity;
    struct { double x; double y; double z; } _prevGravity;
    struct { double x; double y; double z; } _userAcceleration;
    struct GCQuaternion { double x; double y; double z; double w; } _attitude;
    struct GCQuaternion { double x; double y; double z; double w; } _prevAttitude;
    struct { double pitch; double yaw; double roll; } _eulerAngles;
    struct { double pitch; double yaw; double roll; } _prevEulerAngles;
    struct { double x; double y; double z; } _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    BOOL _linkedOnOrAfterCompassFeature;
    BOOL _motionLite;
    BOOL _compassEnabled;
    id /* block */ _valueChangedHandler;
    id /* block */ _internalValueChangedHandler;
    BOOL _emulatedMotionEnabled;
    BOOL _motionUpdatedEnabled;
    BOOL _paused;
    GCController *_controller;
}

- (id)controller;
- (float)_tip;
- (float)_tilt;
- (struct { double x0; double x1; double x2; })userAcceleration;
- (void).cxx_destruct;
- (void)_setCompassEnabled:(BOOL)a0;
- (struct { double x0; double x1; double x2; })gravity;
- (struct GCQuaternion { double x0; double x1; double x2; double x3; })attitude;
- (struct { double x0; double x1; double x2; })rotationRate;
- (void)setValueChangedHandler:(id /* block */)a0;
- (id)initWithController:(id)a0;
- (id /* block */)valueChangedHandler;
- (BOOL)hasGravityAndUserAcceleration;
- (void)_setAttitude:(struct GCQuaternion { double x0; double x1; double x2; double x3; })a0;
- (void)_setRotationRate:(struct { double x0; double x1; double x2; })a0;
- (void)_setMotionLite:(BOOL)a0;
- (BOOL)hasAttitude;
- (BOOL)hasRotationRate;
- (BOOL)hasAttitudeAndRotationRate;
- (BOOL)isEmulatedMicroGamepad;
- (void)_setGravity:(struct { double x0; double x1; double x2; })a0;
- (void)_setUserAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (BOOL)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(BOOL)a0;
- (id /* block */)internalValueChangedHandler;
- (void)setInternalValueChangedHandler:(id /* block */)a0;
- (id /* block */)_motionLiteFusedHandler;
- (void)_startDeviceMotionUpdatesHelper;
- (void)_stopDeviceMotionUpdatesHelper;

@end
