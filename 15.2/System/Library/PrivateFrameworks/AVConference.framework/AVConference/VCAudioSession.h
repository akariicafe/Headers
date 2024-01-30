@class NSMutableArray, NSMutableDictionary, NSDictionary, NSObject, VCAudioSessionClient;
@protocol OS_dispatch_queue;

@interface VCAudioSession : NSObject {
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
}

@property (readonly, nonatomic) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid;
@property (readonly, nonatomic) struct opaqueCMSession { } *cmSession;
@property (readonly, nonatomic) unsigned int audioSessionId;

+ (id)sharedVoiceChatInstance;
+ (BOOL)convertAudioSessionProperties:(id)a0 operatingMode:(int *)a1 deviceRole:(int *)a2 enableAudioPreWarming:(BOOL *)a3;
+ (id)stringFromFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (id)sharedSystemAudioInstance;

- (void)didBeginQuietTime;
- (BOOL)setSampleRate:(double)a0;
- (BOOL)isAnswerOnHoldUpdateParameters:(id)a0;
- (void)didStop;
- (void)didResume;
- (void)selectMicrophone:(unsigned int)a0;
- (void)refreshAudioSessionProperties;
- (void)didAvailableSampleRateChange;
- (void)selectMicrophoneWithType:(unsigned int)a0;
- (void)updateAudioSessionPropertiesWithProperties:(id)a0;
- (void)upgradeAudioSessionProperties;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)a0;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyDynamicSessionProperties;
- (BOOL)shouldResetAudioSession;
- (void)cleanupMicSources;
- (id)initWithMode:(int)a0;
- (void)selectNewActiveClient;
- (BOOL)didRequestedPropertyChange:(id)a0 propertyClass:(Class)a1 compareSelector:(SEL)a2;
- (BOOL)didRequestStringPropertyChange:(id)a0;
- (BOOL)didRequestDictionaryPropertyChange:(id)a0;
- (void)resetOverrideRoute;
- (void)setAudioSessionProperties:(id)a0;
- (void)handleAudioInterruption:(struct opaqueCMSession { } *)a0 interruptionInfo:(struct __CFDictionary { } *)a1;
- (void)setBlockSizeOnSampleRateChange;
- (BOOL)didRequestBoolPropertyChange:(id)a0;
- (void)setupVPBlockFormatWithProperties:(id)a0;
- (void)setAudioSessionMode:(id)a0;
- (BOOL)didRequestArrayPropertyChange:(id)a0;
- (void)setupInputBeamforming;
- (void)didPause;
- (void)setBlockSize:(double)a0 sampleRate:(double)a1 force:(BOOL)a2;
- (void)didEndQuietTime;
- (BOOL)startClient:(id)a0 clientType:(unsigned char)a1 mediaProperties:(id)a2 sessionRef:(unsigned int *)a3;
- (void)invalidateCache;
- (BOOL)applyAudioSessionMediaProperties:(id)a0;
- (void)handleSecureMicNotificationWithInterruptionInfo:(struct __CFDictionary { } *)a0;
- (BOOL)stopClient:(id)a0;
- (void)applyClientPid;
- (void)didInterruptionEnded;
- (void)dealloc;
- (BOOL)forceBufferFrames:(int *)a0;
- (BOOL)applyRequestedProperty:(id)a0 defaultValue:(void *)a1;
- (void)resumeActiveClient;
- (void)setupSharePlayWithVPOperatingMode:(unsigned int)a0;
- (BOOL)resetClient:(id)a0 mediaSetting:(id)a1 interruptSuccessful:(BOOL *)a2;
- (BOOL)startInternal;
- (void)dispatchedSetAudioSessionProperties:(id)a0;
- (BOOL)didRequestDataPropertyChange:(id)a0;

@end
