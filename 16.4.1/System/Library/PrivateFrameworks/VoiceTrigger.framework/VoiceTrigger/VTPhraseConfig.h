@class NSString;

@interface VTPhraseConfig : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float secondChanceThreshold;
@property (readonly, nonatomic) float loggingThreshold;
@property (readonly, nonatomic) float ndapiScaleFactor;
@property (readonly, nonatomic) float recognizerScoreOffset;
@property (readonly, nonatomic) float recognizerScoreScaleFactor;
@property (readonly, nonatomic) NSString *recognizerToken;
@property (readonly, nonatomic) float twoShotFeedbackDelay;
@property (readonly, nonatomic) float remoraTwoShotFeedbackDelay;
@property (readonly, nonatomic) float keywordRejectLoggingThreshold;
@property (readonly, nonatomic) float speakerRejectLoggingThreshold;
@property (readonly, nonatomic) float preTriggerSilenceOffset;

- (void).cxx_destruct;
- (id)copyWithThreshold:(float)a0 secondChanceThreshold:(float)a1 loggingThreshold:(float)a2 ndapiScaleFactor:(float)a3 recognizerScoreOffset:(float)a4 recognizerScoreScaleFactor:(float)a5 keywordRejectLoggingThreshold:(float)a6;
- (id)initWithName:(id)a0 threshold:(float)a1 secondChanceThreshold:(float)a2 loggingThreshold:(float)a3 ndapiScaleFactor:(float)a4 recognizerScoreOffset:(float)a5 recognizerScoreScaleFactor:(float)a6 recognizerToken:(id)a7 twoShotFeedbackDelay:(float)a8 remoraTwoShotFeedbackDelay:(float)a9 keywordRejectLoggingThreshold:(float)a10 speakerRejectLoggingThreshold:(float)a11 preTriggerSilenceOffset:(float)a12;

@end
