@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (id)initWithAssetClass:(Class)a0;
- (int)predictedExitTimesUpdateInterval;
- (int)homeLOISearchRadius;
- (int)locationOfInterestSearchRadius;
- (int)currentLocationUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)workLOISearchRadius;
- (id)init;
- (int)locationOfInterestUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (void).cxx_destruct;
- (int)predictedLocationsOfInterestUpdateInterval;

@end
