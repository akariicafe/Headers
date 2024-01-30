@class NSString;

@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis

@property (readonly, nonatomic) NSString *joinReason;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReasonString:(id)a1 onQueue:(id)a2;

@end
