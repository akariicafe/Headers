@class NSString, VCAudioRelayIO, NSObject;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications> {
    struct OpaqueFigThread { } *_relayThread;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _wakeUpMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _wakeUpCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _relayLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _clientIOLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _remoteIOLock;
    struct _VCRemoteCodecInfo { unsigned int codecType; double sampleRate; } _remoteCodecInfo;
}

@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource;
@property (readonly) unsigned int blocksRelayedCount;
@property (readonly) float clientUplinkPowerMovingAverage;
@property (readonly) float clientDownlinkPowerMovingAverage;
@property (readonly) struct OpaqueAudioConverter { } *remoteToClientConverter;
@property (readonly) struct OpaqueAudioConverter { } *clientToRemoteConverter;
@property (copy, nonatomic) VCAudioRelayIO *remoteIO;
@property (copy, nonatomic) VCAudioRelayIO *clientIO;
@property (readonly) BOOL isRelayRunning;
@property (readonly) double IOBufferDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)lock;
- (id)init;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)stopRemoteIO;
- (BOOL)setIOBufferDuration:(double)a0 withError:(id *)a1;
- (void)dealloc;
- (void)relayCallback;
- (BOOL)startRelayThreadWithError:(id *)a0;
- (BOOL)createAudioConvertersWithError:(id *)a0;
- (void)sleepTillTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)stopClientIO;
- (void)relayProcessSamples;
- (BOOL)startRelayIO:(id)a0 name:(id)a1 recordingsName:(id)a2;
- (BOOL)setRemoteIO:(id)a0 withError:(id *)a1;
- (float)rmsPowerOfBuffer:(float *)a0 numSamples:(unsigned int)a1;
- (struct OpaqueAudioConverter { } *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 outputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 withError:(id *)a2;
- (void)forwardSamplesFromIO:(id)a0 toIO:(id)a1 withConverter:(struct OpaqueAudioConverter { } *)a2;
- (void)destroyAudioConverters;
- (BOOL)startClientIO;
- (BOOL)startRemoteIO;
- (BOOL)canSetPropertyWithError:(id *)a0;
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (BOOL)stopRelayIO:(id)a0;
- (void)stopRelayThread;
- (BOOL)setClientIO:(id)a0 withError:(id *)a1;
- (void)printStreamFormats;
- (void)startPeriodicHealthPrint;
- (void)updateRealTimeStats;

@end
