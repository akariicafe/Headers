@class NSArray;

@interface CSVoiceTriggerAirPodWearerDetectionConfig : NSObject

@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float minimumPhraseLength;
@property (readonly, nonatomic) float shadowMicScoreThreshold;
@property (readonly, nonatomic) float myriadThreshold;
@property (readonly, nonatomic) NSArray *phrasesToSkipBoronDecisionMaking;

- (void).cxx_destruct;
- (id)initWithThreshold:(float)a0 minimumPhraseLength:(float)a1 shadowMicScoreThreshold:(float)a2 myriadThreshold:(float)a3 phrasesToSkipBoronDecisionMaking:(id)a4;

@end
