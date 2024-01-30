@class ServerSpeechRequest, NSString, NSMutableString, NSArray;

@interface ServerSpeechContext : NSObject

@property (retain, nonatomic) ServerSpeechRequest *request;
@property (nonatomic) long long nextMarkerToActOn;
@property (nonatomic) long long nextMarkerAction;
@property (nonatomic) long long err;
@property (nonatomic) struct __TTSPlayback { } *playback;
@property (nonatomic) BOOL finished;
@property (nonatomic) int textRangeOffset;
@property (nonatomic) int lasProcessedMarkerCharIndex;
@property (retain, nonatomic) NSString *parentRequestLanguageCode;
@property (retain, nonatomic) NSMutableString *phonemesSpoken;
@property (nonatomic) float lastRate;
@property (nonatomic) float lastPitch;
@property (nonatomic) float lastVolume;
@property (retain, nonatomic) NSString *lastVoiceName;
@property (retain, nonatomic) NSString *lastRequestedVoiceName;
@property (retain, nonatomic) NSString *lastLanguageCode;
@property (nonatomic) long long lastFootprint;
@property (nonatomic) long long lastVoiceType;
@property (retain, nonatomic) NSArray *lastChannels;
@property (nonatomic) unsigned int lastAudioSessionID;
@property (nonatomic) struct OpaqueAudioFileID { } *outputFileID;
@property (nonatomic) int outputByteCount;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long pauseTime;
@property (nonatomic) unsigned long long waitTimeDuringPause;
@property (nonatomic) BOOL needsReset;
@property (nonatomic) BOOL wasStoppedBeforeFullSynthesis;

- (void).cxx_destruct;
- (void)resetForNextRequest;

@end
