@class VKRunningCurve, VKPuckAnimatorLocationProjector, VKTimedAnimation;
@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    long long _pausedCount;
    BOOL _suspended;
    const struct RouteOverlayCache { void /* function */ **x0; id x1; } *_routeOverlayCache;
}

@property (readonly, nonatomic) struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3]; } x0; struct Mercator3<double> { double x0[3]; } x1; } x1; } x0; BOOL x1; } currentSnappedSegment;
@property (nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } lastProjectedPosition;
@property (retain, nonatomic) id<VKPuckAnimatorTarget> target;
@property (nonatomic) id<VKPuckAnimatorDelegate> delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned long long behavior;

- (void)updateLocation:(id)a0 routeMatch:(id)a1;
- (void)start;
- (void)updateVehicleHeading:(double)a0;
- (id)detailedDescription;
- (id)init;
- (void)pause;
- (void)_step;
- (void)resume;
- (void)dealloc;
- (void)setRouteOverlayCache:(const struct RouteOverlayCache { void /* function */ **x0; id x1; } *)a0;
- (id).cxx_construct;
- (void)stop;

@end
