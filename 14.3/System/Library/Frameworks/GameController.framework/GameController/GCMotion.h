@class NSString, GCController;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCMotion : NSObject <_GCMotionEventSink, NSSecureCoding> {
    id _motionEventObservation;
    struct { double x; double y; double z; } _acceleration;
    struct GCQuaternion { double x; double y; double z; double w; } _prevAttitude;
    struct { double pitch; double yaw; double roll; } _eulerAngles;
    struct { double pitch; double yaw; double roll; } _prevEulerAngles;
    float _tip;
    float _tilt;
    BOOL _motionLite;
    BOOL _compassEnabled;
    BOOL _hasAttitude;
    BOOL _hasRotationRate;
    id /* block */ _valueChangedHandler;
    id<NSObject, NSCopying, NSSecureCoding> _identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) BOOL sensorsRequireManualActivation;
@property (nonatomic) BOOL sensorsActive;
@property (readonly, nonatomic) BOOL hasGravityAndUserAcceleration;
@property (readonly, nonatomic) struct { double x; double y; double z; } gravity;
@property (readonly, nonatomic) struct { double x; double y; double z; } userAcceleration;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } acceleration;
@property (readonly, nonatomic) BOOL hasAttitudeAndRotationRate;
@property (readonly, nonatomic) BOOL hasAttitude;
@property (readonly, nonatomic) BOOL hasRotationRate;
@property (readonly, nonatomic) struct GCQuaternion { double x; double y; double z; double w; } attitude;
@property (readonly, nonatomic) struct { double x; double y; double z; } rotationRate;

- (float)_tip;
- (float)_tilt;
- (void)setRotationRate:(struct { double x0; double x1; double x2; })a0;
- (void).cxx_destruct;
- (void)_setCompassEnabled:(BOOL)a0;
- (void)setController:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setGravity:(struct { double x0; double x1; double x2; })a0;
- (id)initWithController:(id)a0;
- (void)setAcceleration:(struct { double x0; double x1; double x2; })a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (void)_setAttitude:(struct GCQuaternion { double x0; double x1; double x2; double x3; })a0;
- (void)_setRotationRate:(struct { double x0; double x1; double x2; })a0;
- (void)setUserAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)setAttitude:(struct GCQuaternion { double x0; double x1; double x2; double x3; })a0;
- (void)_setMotionLite:(BOOL)a0;
- (void)_setHasAttitude:(BOOL)a0;
- (void)_setHasRotationRate:(BOOL)a0;
- (BOOL)isEmulatedMicroGamepad;
- (void)_setGravity:(struct { double x0; double x1; double x2; })a0;
- (void)_setUserAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)_setAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (BOOL)_isUpdatingDeviceMotion;
- (void)setStateFromMotion:(id)a0;
- (void)_pauseMotionUpdates:(BOOL)a0;
- (void)setMotionEventSource:(id)a0;

@end
