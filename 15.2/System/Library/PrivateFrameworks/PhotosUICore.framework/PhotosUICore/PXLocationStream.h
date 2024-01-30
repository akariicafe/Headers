@class NSString, CLLocationManager;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate> {
    unsigned long long _state;
    double _accuracy;
    id /* block */ _handler;
    CLLocationManager *_locationManager;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)_open;
- (void)dealloc;
- (id)initWithAccuracy:(double)a0 handler:(id /* block */)a1;
- (void)_requestAuthorization;
- (void)_requestLocation;
- (void)_emitLocation:(id)a0;
- (void)_closeStreamWithError;

@end
