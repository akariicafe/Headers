@class CSVoiceTriggerPhraseConfig;

@interface CSPhraseDetectorInfo : NSObject

@property (nonatomic) float effectiveKeywordThreshold;
@property (nonatomic) BOOL hasPendingNearMiss;
@property (retain, nonatomic) CSVoiceTriggerPhraseConfig *phraseConfig;

- (void).cxx_destruct;
- (id)initWithPhraseConfig:(id)a0;

@end
