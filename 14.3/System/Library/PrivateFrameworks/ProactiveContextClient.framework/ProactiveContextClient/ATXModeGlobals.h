@class NSDictionary;

@interface ATXModeGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)predictedExitTimesUpdateInterval;
- (int)workLOISearchRadius;
- (id)init;
- (int)locationOfInterestSearchRadius;
- (void).cxx_destruct;
- (int)homeLOISearchRadius;
- (int)previousLOIExpirationTime;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (int)locationOfInterestUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (id)initWithAssetClass:(Class)a0;

@end
