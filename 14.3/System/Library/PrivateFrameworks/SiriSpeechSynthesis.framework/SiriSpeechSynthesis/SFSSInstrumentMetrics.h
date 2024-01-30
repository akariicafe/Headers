@class NSString;

@interface SFSSInstrumentMetrics : NSObject

@property (copy) NSString *text;
@property (copy) NSString *voiceAssetKey;
@property (copy) NSString *resourceAssetKey;
@property (copy) NSString *audioOutputRoute;
@property (copy) NSString *clientBundleIdentifier;
@property long long requestCreatedTimestamp;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long speakBeginTimestamp;
@property long long speakEndTimestamp;
@property double audioDuration;
@property long long errorCode;
@property long long sourceOfTTS;
@property BOOL isSpeechRequest;

- (void).cxx_destruct;
- (double)playbackDuration;
- (id)dictionaryMetrics;
- (id)description;
- (double)clockFactor;
- (double)speakLatency;
- (double)synthesisLatency;

@end
