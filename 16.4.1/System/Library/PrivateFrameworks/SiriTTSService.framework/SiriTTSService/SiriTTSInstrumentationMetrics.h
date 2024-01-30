@class NSString;

@interface SiriTTSInstrumentationMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ audioOutputRoute;
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ experimentIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *voiceAssetKey;
@property (nonatomic, readonly) NSString *voiceResourceAssetKey;
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic, retain) void /* unknown type, empty encoding */ resource;
@property (nonatomic, copy) NSString *audioOutputRoute;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *experimentIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ requestCreatedTime;
@property (nonatomic) void /* unknown type, empty encoding */ eagerRequestGapInterval;
@property (nonatomic) void /* unknown type, empty encoding */ synthesisBeginTime;
@property (nonatomic) void /* unknown type, empty encoding */ synthesisEndTime;
@property (nonatomic) void /* unknown type, empty encoding */ speechBeginTime;
@property (nonatomic) void /* unknown type, empty encoding */ speechEndTime;
@property (nonatomic) void /* unknown type, empty encoding */ speechEstimatedOutputBeginTime;
@property (nonatomic) void /* unknown type, empty encoding */ audioStartLatency;
@property (nonatomic) void /* unknown type, empty encoding */ serverFirstPacketTime;
@property (nonatomic) void /* unknown type, empty encoding */ serverLastPacketTime;
@property (nonatomic) void /* unknown type, empty encoding */ serverStreamedAudioDuration;
@property (nonatomic) void /* unknown type, empty encoding */ audioDuration;
@property (nonatomic) void /* unknown type, empty encoding */ isWarmStart;
@property (nonatomic) void /* unknown type, empty encoding */ sourceOfTTS;
@property (nonatomic) void /* unknown type, empty encoding */ privacySensitive;
@property (nonatomic) void /* unknown type, empty encoding */ errorCode;
@property (nonatomic) void /* unknown type, empty encoding */ isServerTTSRacing;
@property (nonatomic) void /* unknown type, empty encoding */ promptCount;
@property (nonatomic) void /* unknown type, empty encoding */ neuralAlignmentStall;
@property (nonatomic) void /* unknown type, empty encoding */ neuralAudioClick;
@property (nonatomic) void /* unknown type, empty encoding */ neuralFallback;
@property (nonatomic) void /* unknown type, empty encoding */ isAudibleRequest;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
