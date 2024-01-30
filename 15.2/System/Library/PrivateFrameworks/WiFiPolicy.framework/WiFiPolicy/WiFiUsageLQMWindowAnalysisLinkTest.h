@class NSString, WFMeasureResult;

@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis

@property (readonly, nonatomic) WFMeasureResult *linkTestResults;
@property (readonly, nonatomic) NSString *linkTestReason;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 withWFMeasureResults:(id)a2 onQueue:(id)a3;

@end
