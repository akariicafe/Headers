@class VTPhraseConfig;

@interface VTPhraseDetectorInfo : NSObject

@property (nonatomic) float effectiveKeywordThreshold;
@property (nonatomic) BOOL hasPendingNearMiss;
@property (retain, nonatomic) VTPhraseConfig *phraseConfig;

- (void).cxx_destruct;
- (id)initWithPhraseConfig:(id)a0;

@end
