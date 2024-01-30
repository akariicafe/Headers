@class ATXInformationStore;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXModeEntityCorrelator : NSObject {
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    id<ATXModeEntityEventProviderProtocol> _entityEventProvider;
    ATXInformationStore *_informationStore;
}

- (void).cxx_destruct;
- (id)initWithModeEventProvider:(id)a0 entityEventProvider:(id)a1;
- (id)entityFeaturesForWidgetScoring;
- (id)entityFeaturesForModeEntityScoring;
- (id)mergedPublisher;
- (void)updateInternalStateForGlobalOccurrenceEvent:(id)a0 correlatorState:(id)a1;
- (BOOL)eventOccurredWhileInModeForAggregationEvent:(id)a0 modeTransitionEvent:(id)a1;
- (void)updateInternalStateForLocalOccurrenceEvent:(id)a0 correlatorState:(id)a1;
- (void)trackNewModeTransitionEvent:(id)a0 correlatorState:(id)a1;
- (id)featuresForEntitiesFromCompleteCorrelatorState:(id)a0;
- (void)populateGlobalOccurencesForAllWidgetsWithWidgetModeEventProvider:(id)a0 correlatorState:(id)a1;
- (void)updateDateBasedHistogram:(id)a0 aggregationEvent:(id)a1 today:(id)a2;
- (id)zerosArray;
- (long long)daysSinceDate:(id)a0 today:(id)a1;

@end
