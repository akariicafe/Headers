@class NSString, NSMutableDictionary;

@interface MapsSuggestionsFakeRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {
    id /* block */ _vehicleEventHandler;
    NSMutableDictionary *_fakeData;
    BOOL _breakCallbackPromise;
    unsigned long long _calledFetchNextPLOIs;
    unsigned long long _calledFetchLocationOfInterestWithIdentifier;
    unsigned long long _calledFetchLocationOfInterestAtLocation;
    unsigned long long _calledFetchLocationsOfInterestOfType;
    unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
    unsigned long long _calledFetchPredictedExitDatesFromLocation;
    unsigned long long _calledFetchRoutineModeFromLocation;
    unsigned long long _calledAddLocationOfInterest;
    unsigned long long _calledUpdateLocationOfInterest;
    unsigned long long _calledRemoveLocationOfInterestWithIdentifier;
    unsigned long long _calledStartMonitoringVehicleEvents;
    unsigned long long _calledStopMonitoringVehicleEvents;
    unsigned long long _calledClearAllVehicleEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchRoutineModeFromLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)stopMonitoringVehicleEvents;
- (void)configurePLOIs:(id)a0;
- (void)configureLOIs:(id)a0 forType:(long long)a1;
- (void)configureLOIs:(id)a0 sinceDate:(id)a1;
- (void)configureLOI:(id)a0 forIdentifier:(id)a1;
- (void)configureLOI:(id)a0 atLocation:(id)a1;
- (void)configureBrokenCallBackPromise:(BOOL)a0;
- (void)configureMode:(long long)a0;
- (void)configureExitTimes:(id)a0 onDate:(id)a1 atLocation:(id)a2;
- (void)fireVehicleEvent;
- (unsigned long long)calledFetchNextPLOIs;
- (unsigned long long)calledFetchLocationOfInterestWithIdentifier;
- (unsigned long long)calledFetchLocationOfInterestAtLocation;
- (unsigned long long)calledFetchLocationsOfInterestOfType;
- (unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
- (unsigned long long)calledFetchPredictedExitDatesFromLocation;
- (unsigned long long)calledAddLocationOfInterest;
- (unsigned long long)calledFetchRoutineModeFromLocation;
- (unsigned long long)calledUpdateLocationOfInterest;
- (unsigned long long)calledRemoveLocationOfInterestWithIdentifier;
- (unsigned long long)calledStartMonitoringVehicleEvents;
- (unsigned long long)calledStopMonitoringVehicleEvents;
- (unsigned long long)calledClearAllVehicleEvents;
- (id)init;
- (void).cxx_destruct;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)a0;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)a0;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationOfInterestAtLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestOfType:(long long)a0 withHandler:(id /* block */)a1;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 withHandler:(id /* block */)a1;
- (void)configureError:(id)a0;
- (void)fetchNextPLOIsFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 withHandler:(id /* block */)a3;

@end
