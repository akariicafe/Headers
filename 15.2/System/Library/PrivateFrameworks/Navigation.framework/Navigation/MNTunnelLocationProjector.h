@class NSTimer, NSDate, MNLocation;
@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject {
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
}

@property (weak, nonatomic) id<MNTunnelLocationProjectorDelegate> delegate;
@property (readonly, nonatomic) BOOL isProjecting;

- (void)updateLocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)_approximateMaxSpeedForRoad:(id)a0;
- (void)stop;
- (BOOL)_locationIsGoodEnoughToEndProjection:(id)a0;
- (double)_locationOverdueTimeoutForLocation:(id)a0;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)a0;
- (void)_locationUpdateOverdueTimerFired:(id)a0;
- (id)_projectFromLocation:(id)a0 timeInterval:(double)a1;

@end
