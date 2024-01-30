@class NSString, WFMeasureResult;

@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) WFMeasureResult *linkTestResults;
@property (retain, nonatomic) NSString *linkTestReason;

- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 withWFMeasureResults:(id)a2 andActiveCall:(BOOL)a3 andTimestamp:(id)a4 onQueue:(id)a5;
- (void).cxx_destruct;

@end
