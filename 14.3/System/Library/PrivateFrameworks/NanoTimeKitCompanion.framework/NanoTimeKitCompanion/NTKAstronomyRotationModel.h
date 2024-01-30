@class CADisplayLink;
@protocol NTKAstronomyRotationModelObserver, NURotatable;

@interface NTKAstronomyRotationModel : NSObject {
    CADisplayLink *_displayLink;
    long long _state;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _landingCoordinate;
    void /* unknown type, empty encoding */ _accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    double _pushStartTime;
    double _pullStartTime;
    double _previousDisplayLinkCallbackTime;
}

@property (readonly, nonatomic) const struct NTKAstronomyInteractionSettings { float x0; float x1; float x2; float x3; } *interactionSettings;
@property (weak, nonatomic) id<NURotatable> rotatable;
@property (weak, nonatomic) id<NTKAstronomyRotationModelObserver> observer;
@property (nonatomic, getter=isPulling) BOOL pulling;

- (void)push:(SEL)a0;
- (void)_handleDisplayLink;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)_update;
- (BOOL)isAtHomeCoordinate;

@end
