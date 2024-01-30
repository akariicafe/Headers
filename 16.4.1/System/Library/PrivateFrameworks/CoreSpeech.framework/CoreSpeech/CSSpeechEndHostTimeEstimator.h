@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (id)init;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)a0;
- (void)addNumSamples:(unsigned long long)a0 hostTime:(unsigned long long)a1;
- (void)reset;
- (unsigned long long)estimatedSpeechEndHostTime;

@end
