@class NSString, RTRoutineManager;

@interface MapsSuggestionsRealRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {
    RTRoutineManager *_routineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoringVehicleEvents;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestOfType:(long long)a0 withHandler:(id /* block */)a1;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)a0;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)fetchNextPLOIsFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 withHandler:(id /* block */)a3;
- (void)fetchLocationOfInterestAtLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchRoutineModeFromLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 withHandler:(id /* block */)a1;

@end
