@class NSMutableArray, NSString, NSDictionary, NSMutableDictionary, NSObject, VCAudioSessionClient;
@protocol OS_dispatch_queue;

@interface VCAudioSession : NSObject <VCServerDelegate> {
    int _sessionPid;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_requestedAudioSessionProperties;
    NSMutableDictionary *_currentAudioSessionProperties;
    VCAudioSessionClient *_activeClient;
    NSMutableArray *_clients;
    NSDictionary *_micSourceBack;
    NSDictionary *_micSourceFront;
    unsigned int _selectedMicrophone;
    BOOL _isTetheredDisplayMode;
    double _hardwareSampleRate;
    BOOL _isInterrupted;
    int _playbackMode;
    unsigned int _vpOperatingMode;
}

@property (readonly, nonatomic) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid;
@property (readonly, nonatomic) unsigned int audioSessionId;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)convertAudioSessionProperties:(id)a0 operatingMode:(int *)a1 deviceRole:(int *)a2 enableAudioPreWarming:(BOOL *)a3;
+ (id)sharedSystemAudioInstance;
+ (id)sharedVoiceChatInstance;
+ (id)stringFromFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;

- (void)invalidateCache;
- (id)initWithMode:(int)a0;
- (void)dealloc;
- (BOOL)stopSession;
- (BOOL)startInternal;
- (BOOL)setSampleRate:(double)a0;
- (void)setAudioSessionProperties:(id)a0;
- (void)didStop;
- (BOOL)didRequestStringPropertyChange:(id)a0;
- (void)handleAudioSessionInterruption:(id)a0;
- (BOOL)isAnswerOnHoldUpdateParameters:(id)a0;
- (void)applyAudioModeWithDefaultValue:(void *)a0;
- (BOOL)applyAudioSessionMediaProperties:(id)a0;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)a0;
- (void)applyDynamicSessionProperties;
- (BOOL)applyRequestedProperty:(id)a0 defaultValue:(void *)a1;
- (void)cleanupMicSources;
- (void)didAvailableSampleRateChange;
- (void)didInterruptionEnded;
- (void)didPause;
- (BOOL)didRequestArrayPropertyChange:(id)a0;
- (BOOL)didRequestBoolPropertyChange:(id)a0;
- (BOOL)didRequestDataPropertyChange:(id)a0;
- (BOOL)didRequestDictionaryPropertyChange:(id)a0;
- (BOOL)didRequestedPropertyChange:(id)a0 propertyClass:(Class)a1 compareSelector:(SEL)a2;
- (void)didResume;
- (void)didServerDie;
- (void)dispatchedSetAudioSessionProperties:(id)a0;
- (BOOL)forceBufferFrames:(int *)a0;
- (BOOL)internalSelectMicrophoneWithType:(unsigned int)a0;
- (void)refreshAudioSessionProperties;
- (BOOL)resetClient:(id)a0 mediaSetting:(id)a1 interruptSuccessful:(BOOL *)a2;
- (void)resetOverrideRoute;
- (void)resumeActiveClient;
- (void)selectMicrophoneWithType:(unsigned int)a0;
- (void)selectNewActiveClient;
- (void)setAudioSessionMode:(id)a0;
- (void)setBlockSize:(double)a0 sampleRate:(double)a1 force:(BOOL)a2;
- (void)setBlockSizeOnSampleRateChange;
- (void)setSpeakerProperty:(id)a0;
- (void)setUpVPBlockFormatWithProperties:(id)a0;
- (void)setVPBlockConfigurationProperties:(id)a0;
- (void)setupInputBeamforming;
- (void)setupSharePlayWithVPOperatingMode:(unsigned int)a0;
- (BOOL)shouldResetAudioSession;
- (BOOL)startClient:(id)a0 clientType:(unsigned char)a1 mediaProperties:(id)a2 sessionRef:(unsigned int *)a3;
- (BOOL)startSessionWithMediaProperties:(id)a0 sessionRef:(unsigned int *)a1;
- (BOOL)stopClient:(id)a0;
- (void)updateAudioSessionPropertiesWithProperties:(id)a0;
- (void)upgradeAudioSessionProperties;

@end
