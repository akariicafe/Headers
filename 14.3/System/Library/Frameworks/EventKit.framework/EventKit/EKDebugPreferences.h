@class NSString, CalPreferences;

@interface EKDebugPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) BOOL saveGeocodedLocationsInTravelEngine;
@property (nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property (nonatomic) BOOL showDepartureDateForTransitTimeToLeave;
@property (nonatomic) BOOL shouldBypassTravelEngineThrottle;
@property (nonatomic) BOOL syntheticTravelAdvisoriesEnabled;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
