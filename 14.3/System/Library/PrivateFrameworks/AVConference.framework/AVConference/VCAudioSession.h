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
}

@property (readonly, nonatomic) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid;
@property (readonly, nonatomic) struct opaqueCMSession { } *cmSession;
@property (readonly, nonatomic) unsigned int audioSessionId;

+ (id)sharedInstance;
+ (BOOL)convertAudioSessionProperties:(id)a0 operatingMode:(int *)a1 deviceRole:(int *)a2 enableAudioPreWarming:(BOOL *)a3;

- (void)invalidateCache;
- (id)init;
- (void)dealloc;
- (BOOL)stopClient:(id)a0;
- (BOOL)startInternal;
- (void)didStop;
- (BOOL)setSampleRate:(double)a0;
- (void)setAudioSessionProperties:(id)a0;
- (BOOL)shouldResetAudioSession;
- (BOOL)startClient:(id)a0 clientType:(unsigned char)a1 mediaProperties:(id)a2 sessionRef:(unsigned int *)a3;
- (BOOL)resetClient:(id)a0 mediaSetting:(id)a1 interruptSuccessful:(BOOL *)a2;
- (BOOL)isAnswerOnHoldUpdateParameters:(id)a0;
- (BOOL)didRequestedStringPropertyChange:(id)a0;
- (BOOL)applyRequestedProperty:(id)a0 defaultValue:(void *)a1;
- (void)setupInputBeamforming;
- (void)setBlockSize:(double)a0 sampleRate:(double)a1 force:(BOOL)a2;
- (BOOL)forceBufferFrames:(int *)a0;
- (void)applyClientPid;
- (void)selectMicrophoneWithType:(unsigned int)a0;
- (void)setupVPBlockFormatWithProperties:(id)a0;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)a0;
- (void)refreshAudioSessionProperties;
- (BOOL)applyAudioSessionMediaProperties:(id)a0;
- (void)upgradeAudioSessionProperties;
- (void)selectNewActiveClient;
- (void)cleanupMicSources;
- (void)resumeActiveClient;
- (void)didBeginQuietTime;
- (void)didEndQuietTime;
- (void)didPause;
- (void)didResume;
- (void)didInterruptionEnded;
- (void)resetOverrideRoute;
- (void)setBlockSizeOnSampleRateChange;
- (void)didAvailableSampleRateChange;
- (void)handleAudioInterruption:(struct opaqueCMSession { } *)a0 interruptionInfo:(struct __CFDictionary { } *)a1;
- (void)setAudioSessionMode:(id)a0;
- (void)selectMicrophone:(unsigned int)a0;

@end
