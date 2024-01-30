@class NSString;

@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *joinReason;

- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReasonString:(id)a1 andActiveCall:(BOOL)a2 andTimestamp:(id)a3 onQueue:(id)a4;
- (void).cxx_destruct;

@end
