@class VKRunningCurve, GEORouteMatch, VKPuckAnimatorLocationProjector, VKTimedAnimation;
@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    long long _pausedCount;
    BOOL _suspended;
    struct Matrix<double, 3, 1> { double _e[3]; } _lastProjectedPosition;
}

@property (retain, nonatomic) GEORouteMatch *lastProjectedLocation;
@property (retain, nonatomic) id<VKPuckAnimatorTarget> target;
@property (nonatomic) id<VKPuckAnimatorDelegate> delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned long long behavior;

- (id)detailedDescription;
- (id)init;
- (void)updateVehicleHeading:(double)a0;
- (void)dealloc;
- (void)stop;
- (void)updateLocation:(id)a0 routeMatch:(id)a1;
- (void)pause;
- (id).cxx_construct;
- (void)start;
- (void)resume;
- (void)_step;

@end
