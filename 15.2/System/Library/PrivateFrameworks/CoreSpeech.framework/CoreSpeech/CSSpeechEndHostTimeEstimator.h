@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;
- (id)init;
- (void)reset;
- (unsigned long long)estimatedSpeechEndHostTime;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;

@end
