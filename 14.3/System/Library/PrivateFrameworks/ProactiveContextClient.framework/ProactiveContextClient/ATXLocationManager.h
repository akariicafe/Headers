@class NSString, GEOLocationShifter, NSDate, NSObject, _PASLock;
@protocol ATXLocationManagerGPS, ATXLocationManagerStateStore, ATXLocationManagerRoutine, OS_dispatch_queue;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {
    id<ATXLocationManagerGPS> _gps;
    id<ATXLocationManagerRoutine> _routine;
    id<ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    GEOLocationShifter *_shifter;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)stringForLOIType:(long long)a0;

- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (BOOL)preciseLocationEnabled;
- (BOOL)isTourist;
- (void)beginMonitoringRegion:(id)a0;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (BOOL)locationEnabled;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (void)invalidateLocationOfInterestCache;
- (id)init;
- (id)predictedExitTimes;
- (id)shiftedLocationForChinaFromLocation:(id)a0;
- (void).cxx_destruct;
- (id)getCurrentLocationWithShiftInChina;
- (id)locationOfInterestAtCurrentLocation;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (void)updateCurrentLocationOfInterest;
- (void)gotState:(id)a0;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (id)predictedLocationsOfInterest;
- (id)getCurrentPreciseLocationWithShiftInChina;
- (id)initWithStateStore:(id)a0;
- (void)clearLocationOfInterest;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (id)getCurrentLocation;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (BOOL)isNearFrequentLocationOfInterest;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)didGetLocationUpdate:(id)a0;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)updatePredictedExitTimes;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (id)previousLOIAndCurrentLOI;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (id)getCurrentPreciseLocation;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3;
- (void)updatePredictedLocationsOfInterest;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;

@end
