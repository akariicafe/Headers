@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject

@property (retain, nonatomic) id voiceChatService;
@property id<GKVoiceChatClient> client;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;

+ (void)initialize;
+ (id)defaultVoiceChatService;
+ (BOOL)isVoIPAllowed;

- (void).cxx_destruct;
- (void)stopVoiceChatWithParticipantID:(id)a0;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (BOOL)acceptCallID:(long long)a0 error:(id *)a1;
- (void)denyCallID:(long long)a0;
- (void)receivedRealTimeData:(id)a0 fromParticipantID:(id)a1;
- (BOOL)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;

@end
