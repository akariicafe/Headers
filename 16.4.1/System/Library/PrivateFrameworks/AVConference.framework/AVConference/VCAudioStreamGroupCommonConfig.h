@interface VCAudioStreamGroupCommonConfig : NSObject

@property (nonatomic) int processID;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) unsigned int preferredIOSampleRate;
@property (nonatomic) unsigned int preferredIOSamplesPerFrame;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long powerSpectrumStreamToken;
@property (nonatomic) void /* function */ *didProcessSamplesCallback;
@property (nonatomic) void *didProcessSamplesCallbackContext;
@property (nonatomic) unsigned int audioChannelIndex;
@property (nonatomic) unsigned long long spatialAudioSourceID;

- (void)dealloc;

@end
