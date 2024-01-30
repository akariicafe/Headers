@class NSArray, NSDictionary, TPSExperiment;

@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource> {
    NSArray *_processors;
    NSArray *_allTipStatus;
    NSDictionary *_contextualInfoMap;
    NSDictionary *_eventHistoryMap;
    TPSExperiment *_experiment;
}

- (id)experiment;
- (void).cxx_destruct;
- (id)initWithAllTipStatus:(id)a0 contextualInfoMap:(id)a1 eventHistoryMap:(id)a2 experiment:(id)a3 processors:(id)a4;
- (void)resetAnalytics;
- (id)allTipStatus;
- (id)allContextualInfo;
- (id)contextualEventForIdentifier:(id)a0;
- (id)contextualInfoForIdentifier:(id)a0;
- (id)initWithAllTipStatus:(id)a0 contextualInfoMap:(id)a1 eventHistoryMap:(id)a2 experiment:(id)a3;
- (void)processAnalytics;

@end
