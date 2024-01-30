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

+ (id)eventStream;
+ (id)entitlements;

- (void)locationManager:(id)a0 didVisit:(id)a1;
- (id)_locationFromVisit:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_handleVisit:(id)a0;
- (unsigned long long)userSpecificPlaceTypeFromType:(unsigned long long)a0;
- (unsigned long long)placeTypeFromType:(unsigned long long)a0;
- (void)stop;

@end
