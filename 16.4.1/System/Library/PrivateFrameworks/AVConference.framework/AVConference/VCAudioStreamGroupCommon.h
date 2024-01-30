@class VCAudioIO, NSString, VCAudioPowerSpectrumSource;

@interface VCAudioStreamGroupCommon : VCObject <VCAudioStreamGroup, VCMediaCaptureController, VCAudioPowerSpectrumSourceDelegate, VCAudioIODelegate> {
    struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream *x0; BOOL x1; BOOL x2; void *x3; void /* function */ *x4; unsigned short x5; id x6; unsigned int x7; unsigned int x8; } *_audioStreams;
    struct opaqueVCAudioBufferList { } *_sampleBuffer;
    struct VCAudioStreamGroupSyncDestinationList { struct tagVCAudioStreamGroupSyncDestination *slh_first; } _syncDestinationList;
    int _processID;
    BOOL _isGKVoiceChat;
    unsigned int _preferredIOSampleRate;
    unsigned int _preferredIOSamplesPerFrame;
    unsigned int _audioSessionID;
    int _operatingMode;
    unsigned int _audioType;
    unsigned long long _spatialAudioSourceID;
    long long _powerSpectrumStreamToken;
    unsigned int _streamGroupID;
    NSString *_participantUUID;
    unsigned char _direction;
    unsigned int _maxChannelCount;
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;
    BOOL _isPowerSpectrumEnabled;
    unsigned int _processedFramesCount;
    struct opaqueCMSimpleQueue { } *_syncDestinationChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_syncDestinationChangeEventPool;
}

@property (nonatomic) void /* function */ *callback;
@property (nonatomic) void *context;
@property (readonly) struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream *x0; BOOL x1; BOOL x2; void *x3; void /* function */ *x4; unsigned short x5; id x6; unsigned int x7; unsigned int x8; } *audioStreams;
@property (readonly) VCAudioIO *audioIO;
@property unsigned int audioChannelIndex;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedDirection:(unsigned char)a0;

- (id)stopCapture;
- (void)dealloc;
- (id)startCapture;
- (BOOL)addSyncDestination:(id)a0 shouldSchedule:(BOOL)a1;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (unsigned int)audioTypeForCaptureSource:(int)a0;
- (void)cleanupPowerSpectrumSource;
- (void)cleanupStreams;
- (void)cleanupSyncDestinations;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 averagePower:(float)a1;
- (BOOL)configureAudioIOWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)configurePowerSpectrumSource;
- (BOOL)configureStreams:(id)a0 withRateControlConfig:(id)a1;
- (void)didResumeAudioIO:(id)a0;
- (void)didServerDie;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (BOOL)enqueueSyncDestinationChangeEvent:(id)a0 eventType:(int)a1;
- (void)flushSyncDestinationUpdatesEventQueue;
- (id)getAudioDumpName;
- (id)initWithConfig:(id)a0 audioCallback:(void /* function */ *)a1 context:(void *)a2 audioDirection:(unsigned char)a3;
- (BOOL)reconfigureAudioIOIfNeededWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)removeSyncDestination:(id)a0 shouldSchedule:(BOOL)a1;
- (void)sendAudioPowerSpectrumSourceRegistration:(BOOL)a0;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setupStreamsWithStreamInfos:(id)a0;
- (void)startAudioDump;
- (void)stopAudioDump;

@end
