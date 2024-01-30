@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)workLOISearchRadius;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)locationOfInterestSearchRadius;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (void).cxx_destruct;
- (int)predictedLocationsOfInterestUpdateInterval;
- (id)init;
- (int)currentLocationUpdateInterval;
- (int)locationOfInterestUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)frequentLOIMinimumVisits;
- (int)homeLOISearchRadius;
- (id)initWithAssetClass:(Class)a0;
- (int)predictedExitTimesUpdateInterval;

@end
