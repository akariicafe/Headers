@class NSString, NSArray;

@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *dataTriggerReason;
@property (readonly, nonatomic) NSArray *triggerCriteriaList;

- (void)performAnalysis;
- (id)addDimensionsTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithRollingWindow:(id)a0 andSubReason:(id)a1 andActiveCall:(BOOL)a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
