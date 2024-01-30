@class NSString;

@interface WiFiUsageLQMWindowAnalysisInCall : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *status;
@property (nonatomic) double duration;

- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andCallStatus:(id)a1 andCallDuration:(double)a2 andActiveCall:(BOOL)a3 andTimestamp:(id)a4 onQueue:(id)a5;
- (void).cxx_destruct;

@end
