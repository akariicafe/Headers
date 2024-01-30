@class NSDictionary;

@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis

@property (nonatomic) unsigned long long networkQualityResponsivenessScore;
@property (retain, nonatomic) NSDictionary *networkQualityEventFields;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 AndDictionary:(id)a1 onQueue:(id)a2;

@end
