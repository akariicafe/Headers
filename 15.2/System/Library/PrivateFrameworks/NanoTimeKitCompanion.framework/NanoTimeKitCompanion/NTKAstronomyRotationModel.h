@class CADisplayLink;
@protocol NUNIRotatable, NTKAstronomyRotationModelObserver;

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
@property (weak, nonatomic) id<NUNIRotatable> rotatable;
@property (weak, nonatomic) id<NTKAstronomyRotationModelObserver> observer;
@property (nonatomic, getter=isPulling) BOOL pulling;

- (void).cxx_destruct;
- (void)_handleDisplayLink;
- (id)init;
- (void)_update;
- (void)push:(SEL)a0;
- (void)dealloc;
- (void)stop;
- (BOOL)isAtHomeCoordinate;

@end
