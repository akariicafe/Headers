@class NSString;

@interface WiFiUsageLQMWindowAnalysisLinkDown : WiFiUsageLQMWindowAnalysis

@property (nonatomic) BOOL isInvoluntary;
@property (retain, nonatomic) NSString *linkDownReason;
@property (nonatomic) long long linkDownSubreason;
@property (nonatomic) unsigned long long linkUpDuration;

- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 WithIsInvoluntary:(BOOL)a1 AndLinkChangeReason:(long long)a2 AndLinkChangeSubreason:(long long)a3 AndDuration:(unsigned long long)a4 andActiveCall:(BOOL)a5 AndTimestamp:(id)a6 onQueue:(id)a7;
- (void).cxx_destruct;

@end
