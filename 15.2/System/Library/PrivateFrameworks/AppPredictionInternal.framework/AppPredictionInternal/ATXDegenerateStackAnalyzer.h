@class ATXSuggestionDeduplicator, ATXInformationStore;

@interface ATXDegenerateStackAnalyzer : NSObject {
    ATXInformationStore *_informationStore;
    ATXSuggestionDeduplicator *_deduplicator;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isSmartStackPossiblyDegenerate:(id)a0 onPage:(id)a1 usingTimelineEntriesSinceDate:(id)a2;
- (id)initWithInformationStore:(id)a0;
- (id)_simulatedInfoSuggestionForWidget:(id)a0;
- (BOOL)_wouldBlendingDeduplicateWidget:(id)a0 inStack:(id)a1 againstOtherWidgetsOnPage:(id)a2;
- (BOOL)_isWidgetEligibleForHeuristicFallback:(id)a0;
- (BOOL)_hasWidgetHadTimelineDonations:(id)a0 startDate:(id)a1;
- (BOOL)areAllSmartStacksPossiblyDegenerateInPages:(id)a0 usingTimelineEntriesSinceDate:(id)a1;

@end
