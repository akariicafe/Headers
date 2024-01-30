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

- (void)_beginMonitoringLocationForManager:(id)a0;
- (BOOL)_wantsLocation;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_endTraining;
- (void)_stopMonitoringLocationForManager:(id)a0;
- (id)initWithRelevanceEngine:(id)a0 locationManager:(id)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)_handleLocationUpdate:(id)a0;
- (id)_currentLocationManager;
- (void)resume;
- (void)dealloc;
- (void)_updateLocationStatus;
- (void)_beginTraining;

@end
