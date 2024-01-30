@class NSSet;

@interface IntelligencePlatformCore.EntityRelevanceModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_coarseGeoHash;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_coarseTimeOfDay;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_dayOfWeek;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_largeGeoHash;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_microLocation;
    void /* unknown type, empty encoding */ behaviorPopularityGivenSequence;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_specificGeoHash;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_timeOfDay;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseGeoHash_coarseTimeOfDay;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseGeoHash_dayOfWeek;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseGeoHash_timeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_coarseGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_dayOfWeek;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_coarseTimeOfDay;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay;
    void /* unknown type, empty encoding */ dailyDoseL1Error;
    void /* unknown type, empty encoding */ dailyDoseL2Error;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_dayOfWeek;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_largeGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_largeGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_largeGeoHash_timeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_largeGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_largeGeoHash;
    void /* unknown type, empty encoding */ lastExecutionAge;
    void /* unknown type, empty encoding */ longTermTrendingPopularity;
    void /* unknown type, empty encoding */ medianTimeIntervalBetweenExecution;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_microLocation;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_microLocation;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_microLocation_timeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_microLocation;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_microLocation;
    void /* unknown type, empty encoding */ sequencePopularityGivenBehavior;
    void /* unknown type, empty encoding */ shortTermTrendingPopularity;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_specificGeoHash_timeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_timeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_timeOfDay;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_timeOfDay;
    void /* unknown type, empty encoding */ trendingPopularity;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_timeOfDay_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_wifi;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_wifi;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
