@class VKRunningCurve, _delegate, VKPuckAnimatorLocationProjector, VKTimedAnimation;
@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    long long _pausedCount;
    BOOL _suspended;
    BOOL _hasElevation;
    struct { double latitude; double longitude; } _lastProjectedCoordinate;
    const struct RouteOverlayCache { void /* function */ **x0; id x1; } *_routeOverlayCache;
    struct linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { struct vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> { void *__value_; } __end_cap_; } _backing; } _locationUpdateSubscriptions;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _delegate *_listener; struct function<void (double)> { struct __value_func<void (double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } x0; } _puckUpdatePointDeltaForAnimation;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _delegate *_listener; struct function<void (double)> { struct __value_func<void (double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } x0; } _puckUpdateDistanceDeltaThreshold;
}

@property (readonly, nonatomic) struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3]; } x0; struct Mercator3<double> { double x0[3]; } x1; } x1; } x0; BOOL x1; } currentSnappedSegment;
@property (nonatomic) struct Matrix<double, 3, 1> { double _e[3]; } lastProjectedPosition;
@property (nonatomic) BOOL alwaysUseGoodRouteMatch;
@property (retain, nonatomic) id<VKPuckAnimatorTarget> target;
@property (weak, nonatomic) id<VKPuckAnimatorDelegate> delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned long long behavior;

- (id)detailedDescription;
- (void)updatedPosition:(const void *)a0;
- (void)updateLocation:(id)a0 routeMatch:(id)a1;
- (void)_step;
- (id)initWithCallbackQueue:(id)a0;
- (BOOL)hasElevation;
- (unsigned long long)subscribeToLocationUpdates:(struct function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> { struct __value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id).cxx_construct;
- (void)pause;
- (void)_publishLocationUpdate:(id)a0 routeMatch:(id)a1 uuid:(id)a2;
- (void)dealloc;
- (void)updateVehicleHeading:(double)a0;
- (void)setRouteOverlayCache:(const struct RouteOverlayCache { void /* function */ **x0; id x1; } *)a0;
- (void)stop;
- (void)start;
- (void)unsubscribeFromLocationUpdates:(unsigned long long)a0;
- (void)updateLocation:(id)a0 routeMatch:(id)a1 locationUpdateUUID:(id)a2;
- (void).cxx_destruct;
- (void)resume;

@end
