@class NSString;

@interface WiFiUsageLQMWindowAnalysisLinkDown : WiFiUsageLQMWindowAnalysis

@property (readonly, nonatomic) BOOL isInvoluntary;
@property (readonly, nonatomic) NSString *linkDownReason;
@property (readonly, nonatomic) long long linkDownSubreason;
@property (readonly, nonatomic) unsigned long long linkUpDuration;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 WithIsInvoluntary:(BOOL)a1 AndLinkChangeReason:(long long)a2 AndLinkChangeSubreason:(long long)a3 AndDuration:(unsigned long long)a4 onQueue:(id)a5;

@end
