@class NSArray, NSDictionary, TPSExperiment;

@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource> {
    NSArray *_processors;
    NSArray *_allTipStatus;
    NSDictionary *_contextualInfoMap;
    NSDictionary *_eventHistoryMap;
    TPSExperiment *_experiment;
}

- (id)allContextualInfo;
- (void).cxx_destruct;
- (void)processAnalytics;
- (id)initWithAllTipStatus:(id)a0 contextualInfoMap:(id)a1 eventHistoryMap:(id)a2 experiment:(id)a3 processors:(id)a4;
- (id)experiment;
- (void)resetAnalytics;
- (id)contextualEventForIdentifier:(id)a0;
- (id)initWithAllTipStatus:(id)a0 contextualInfoMap:(id)a1 eventHistoryMap:(id)a2 experiment:(id)a3;
- (id)contextualInfoForIdentifier:(id)a0;
- (id)allTipStatus;

@end
