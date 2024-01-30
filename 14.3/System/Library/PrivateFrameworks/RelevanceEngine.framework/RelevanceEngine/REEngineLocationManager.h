@class RELocationManager, CLLocation, REObserverStore;

@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties> {
    RELocationManager *_locationManager;
    RELocationManager *_simulatedLocationManager;
    REObserverStore *_observers;
    BOOL _monitoringLocation;
}

@property (retain) CLLocation *location;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) BOOL monitoringLocation;
@property (readonly, nonatomic) RELocationManager *locationManager;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)pause;
- (void)resume;
- (id)initWithRelevanceEngine:(id)a0 locationManager:(id)a1;
- (void)_beginTraining;
- (void)_endTraining;
- (void)_updateLocationStatus;
- (BOOL)_wantsLocation;
- (id)_currentLocationManager;
- (void)_beginMonitoringLocationForManager:(id)a0;
- (void)_stopMonitoringLocationForManager:(id)a0;
- (void)_handleLocationUpdate:(id)a0;

@end
