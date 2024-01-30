@class NSArray, NSTimer, MNActiveRouteInfo, NSDate, MNLocation;
@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject {
    MNActiveRouteInfo *_currentRouteInfo;
    NSArray *_tunnelRanges;
    MNLocation *_lastUnprojectedLocation;
    NSDate *_lastUnprojectedLocationDate;
    NSTimer *_locationUpdateOverdueTimer;
    double _locationOverdueTimeoutForTunnel;
}

@property (weak, nonatomic) id<MNTunnelLocationProjectorDelegate> delegate;
@property (readonly, nonatomic) BOOL isProjecting;

- (void)updateLocation:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })_tunnelRangeForRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (void)_locationUpdateOverdueTimerFired:(id)a0;
- (id)_projectedLocationFrom:(id)a0 timeInterval:(double)a1 tunnelRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a2;
- (struct { unsigned int x0; float x1; })_projectedRouteCoordinateFrom:(struct { unsigned int x0; float x1; })a0 timeInterval:(double)a1 tunnelRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a2;
- (void)_resetTimerWithTimeout:(double)a0;
- (id)_tunnelRanges;
- (void)updateForRouteInfo:(id)a0;

@end
