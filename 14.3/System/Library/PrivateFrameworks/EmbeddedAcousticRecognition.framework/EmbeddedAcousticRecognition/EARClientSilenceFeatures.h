@interface EARClientSilenceFeatures : NSObject

@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double processedAudioMs;

- (id)initWithSilenceFramesCountMs:(double)a0 silenceProbability:(double)a1 silenceDurationMs:(double)a2 silencePosterior:(double)a3 processedAudioMs:(double)a4;

@end
