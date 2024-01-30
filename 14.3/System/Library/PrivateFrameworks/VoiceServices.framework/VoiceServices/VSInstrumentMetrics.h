@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;
@property (copy) NSString *voiceResourceAssetKey;
@property (copy) NSString *audioOutputRoute;
@property (copy) NSString *clientBundleIdentifier;
@property (copy) NSString *experimentIdentifier;
@property long long requestCreatedTimestamp;
@property long long eagerRequestCreatedTimeStampDiffs;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long speechBeginTimestamp;
@property long long speechEndTimestamp;
@property long long audioStartTimestampDiffs;
@property double audioDuration;
@property BOOL isWarmStart;
@property BOOL isServerTTS;
@property BOOL isServerStreamTTS;
@property BOOL isServerTimeout;
@property BOOL isServerTTSRacing;
@property BOOL canUseServerTTS;
@property BOOL neuralAlignmentStall;
@property long long promptCount;
@property long long errorCode;
@property long long sourceOfTTS;
@property BOOL isSpeechRequest;
@property BOOL isCacheHitFromDisk;
@property BOOL isCacheHitFromMemory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryMetrics;
- (double)_clockFactor;
- (double)ttsSynthesisLatency;
- (double)realTimeFactor;
- (double)audioQueueLatency;
- (double)eagerRequestTimeGap;
- (BOOL)isSynthesisCached;
- (id)cappedRealTimeFactor;
- (id)description;
- (double)timeToSpeakLatency;
- (void)encodeWithCoder:(id)a0;

@end
