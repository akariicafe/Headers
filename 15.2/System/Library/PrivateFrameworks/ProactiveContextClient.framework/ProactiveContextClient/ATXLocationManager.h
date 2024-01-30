@class NSString, GEOLocationShifter, NSDate, NSObject, _PASLock;
@protocol ATXLocationManagerGPS, ATXLocationManagerStateStore, ATXLocationParameters, ATXLocationManagerRoutine, OS_dispatch_queue;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {
    id<ATXLocationManagerGPS> _gps;
    id<ATXLocationManagerRoutine> _routine;
    id<ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    GEOLocationShifter *_shifter;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
    id<ATXLocationParameters> _modeGlobals;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForLOIType:(long long)a0;
+ (id)debugDescriptionForCLLocation:(id)a0;

- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (BOOL)isTourist;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (BOOL)isNearFrequentLocationOfInterest;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (BOOL)locationEnabled;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (BOOL)preciseLocationEnabled;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (void)updatePredictedLocationsOfInterest;
- (void)updateCurrentLocationOfInterest;
- (id)shiftedLocationForChinaFromLocation:(id)a0;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (id)predictedLocationsOfInterest;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (void)updatePredictedExitTimes;
- (id)predictedExitTimes;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (void)beginMonitoringRegion:(id)a0;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (void)clearLocationOfInterest;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (void).cxx_destruct;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (id)init;
- (id)getCurrentPreciseLocationWithShiftInChina;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (id)shifter;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)gotState:(id)a0;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (id)previousLOIAndCurrentLOI;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (void)invalidateLocationOfInterestCache;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (id)getCurrentLocationWithShiftInChina;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (id)getCurrentLocation;
- (id)locationOfInterestAtCurrentLocation;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (id)getCurrentPreciseLocation;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;

@end
