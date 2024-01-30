@class NSString, RTRoutineManager, CLLocationManager;

@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    BOOL _locationEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)stop;
- (void)start;
- (void)_handleVisit:(id)a0;
- (id)_locationFromVisit:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
