@class MRUWaveformSettings, MPCProcessAudioTap, NSHashTable, NSString, NSObject, MRUWaveformData;
@protocol OS_dispatch_queue;

@interface MRUAudioAnalyzer : NSObject <MPCProcessAudioTapDelegate> {
    int _frameCount;
    unsigned int _log2FrameCount;
    int _bufferSizePowerOf2;
    int _complexCount;
    float _normalizationFactor;
    float *_realBuffer;
    float *_imagBuffer;
    float *_transferBuffer;
    float *_magnitudes;
    float *_hannWindow;
    float *_leftSamples;
    float *_rightSamples;
    float *_mixed;
    struct OpaqueFFTSetup { } *_fftSetup;
}

@property (nonatomic) int refreshRate;
@property (nonatomic) float sampleRate;
@property (retain, nonatomic) MRUWaveformSettings *settings;
@property (retain, nonatomic) MPCProcessAudioTap *tap;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tapQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) MRUWaveformData *waveformData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioAnalyzerForPID:(int)a0;

- (void)addObserver:(id)a0;
- (void)processAudioTapDidReceiveAudioSamples:(void *)a0 numberOfSamples:(unsigned int)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)stop;
- (void)start;
- (id)initWithPID:(int)a0;
- (void).cxx_destruct;
- (id)binSamples:(float *)a0 count:(int)a1;
- (void)computeFFTWithSamples:(float *)a0;
- (void)processAudioTapDidStop;

@end
