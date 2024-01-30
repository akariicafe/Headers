@class NSString, MKLocationManager, NSTimer;

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation> {
    BOOL _active;
    double _desiredAccuracy;
    MKLocationManagerSingleUpdater *_selfReference;
    MKLocationManager *_locationManager;
    NSTimer *_timeoutTimer;
    double _maxLocationAge;
}

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (id)initWithLocationManager:(id)a0 handler:(id /* block */)a1;
- (id)initWithLocationManager:(id)a0 desiredAccuracy:(double)a1 handler:(id /* block */)a2;
- (id)initWithLocationManager:(id)a0 desiredAccuracy:(double)a1 handler:(id /* block */)a2 timeout:(double)a3;
- (id)initWithLocationManager:(id)a0 desiredAccuracy:(double)a1 handler:(id /* block */)a2 timeout:(double)a3 maxLocationAge:(double)a4;
- (void)handleTimeout:(id)a0;
- (void)start;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;

@end
