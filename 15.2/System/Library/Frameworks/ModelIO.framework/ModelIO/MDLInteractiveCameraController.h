@class MDLStereoscopicCamera;

@interface MDLInteractiveCameraController : NSObject {
    void /* unknown type, empty encoding */ _lookAt;
    void /* unknown type, empty encoding */ _clickPoint;
    void /* unknown type, empty encoding */ _dragVector;
    float _pitch;
    float _yaw;
    struct MDLAABB { void /* unknown type, empty encoding */ maxBounds; void /* unknown type, empty encoding */ minBounds; } _framingBounds;
    float _targetElevation;
}

@property (copy, nonatomic) MDLStereoscopicCamera *camera;
@property (nonatomic) void /* unknown type, empty encoding */ clickPoint;
@property (nonatomic) void /* unknown type, empty encoding */ dragPoint;
@property (nonatomic) void /* unknown type, empty encoding */ trackVector;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) float tumbleSpeed;
@property (nonatomic) float zoomSpeed;
@property (nonatomic) float trackSpeed;
@property (nonatomic) void /* unknown type, empty encoding */ targetPosition;
@property (nonatomic) float targetDistance;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) struct MDLAABB { } framingBounds;
@property (nonatomic) void /* unknown type, empty encoding */ viewSize;
@property (nonatomic) float zoom;

- (void).cxx_destruct;
- (id)init;
- (void)update:(float)a0;
- (id).cxx_construct;
- (void)frameBounds;
- (void)frameObject;
- (void)mouseMotionX:(float)a0 Y:(float)a1;

@end
