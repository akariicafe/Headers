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
    unsigned long long _spatialToken;
    long long _powerSpectrumStreamToken;
    unsigned int _streamGroupID;
    NSString *_participantUUID;
    unsigned char _direction;
    unsigned int _maxChannelCount;
    void *_context;
    void /* function */ *_callback;
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;
    BOOL _isPowerSpectrumEnabled;
    unsigned int _processedFramesCount;
    struct opaqueCMSimpleQueue { } *_syncDestinationChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_syncDestinationChangeEventPool;
}

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
- (id)startCapture;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (id)initWithConfig:(id)a0 audioCallback:(void /* function */ *)a1 context:(void *)a2 audioDirection:(unsigned char)a3;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)configureStreams:(id)a0 withRateControlConfig:(id)a1;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; } *)a0;
- (void)startAudioDump;
- (void)stopAudioDump;
- (BOOL)addSyncDestination:(id)a0 shouldSchedule:(BOOL)a1;
- (BOOL)removeSyncDestination:(id)a0 shouldSchedule:(BOOL)a1;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)cleanupStreams;
- (void)cleanupSyncDestinations;
- (void)cleanupPowerSpectrumSource;
- (void)flushSyncDestinationUpdatesEventQueue;
- (BOOL)reconfigureAudioIOIfNeededWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)configureAudioIOWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)enqueueSyncDestinationChangeEvent:(id)a0 eventType:(int)a1;
- (BOOL)setupPowerSpectrumSource;
- (void)setupStreamsWithStreamInfos:(id)a0;
- (void)sendAudioPowerSpectrumSourceRegistration:(BOOL)a0;
- (id)getAudioDumpName;

@end
