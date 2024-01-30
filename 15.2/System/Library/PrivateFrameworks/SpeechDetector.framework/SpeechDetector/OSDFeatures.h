@interface OSDFeatures : NSObject

@property (readonly, nonatomic) double silenceFramesCountMs;
@property (readonly, nonatomic) double silenceProbability;
@property (readonly, nonatomic) double silenceDurationMs;
@property (readonly, nonatomic) double processedAudioMs;

- (id)initWithSilenceFramesCountMs:(double)a0 silenceProbability:(double)a1 silenceDurationMs:(double)a2 processedAudioMs:(double)a3;

@end
