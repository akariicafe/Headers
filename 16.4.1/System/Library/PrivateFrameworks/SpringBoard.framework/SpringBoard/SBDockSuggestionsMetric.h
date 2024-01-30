@class NSString, NSArray, PETScalarEventTracker, NSMutableDictionary, PETDistributionEventTracker;

@interface SBDockSuggestionsMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    NSArray *_trackers;
    PETScalarEventTracker *_enabledTracker;
    NSMutableDictionary *_indexToSuggestionType;
    PETDistributionEventTracker *_distTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
