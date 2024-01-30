@class MPCPlaybackEngine, NSMutableArray;

@interface MPCAudioSpectrumAnalyzer : NSObject {
    unsigned long long _frequencyBuffersSize;
    float *_intermediateBuffer;
    unsigned long long _windowSize;
    struct DSPSplitComplex { float *realp; float *imagp; } _fftBuffer;
    struct opaqueMTAudioProcessingTap { } *_audioProcessingTap;
    BOOL _processing;
}

@property (nonatomic) float powerLevel;
@property (nonatomic) float sampleRate;
@property (nonatomic) struct OpaqueFFTSetup { } *fftSetup;
@property (nonatomic) float *window;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void)_createAudioTap;
- (id)initWithPlaybackEngine:(id)a0;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap { } *)a0 maxFrames:(long long)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)_resizeBuffers:(unsigned long long)a0;
- (void)_analyzeFrequencies:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(long long)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 observers:(id)a3;
- (void).cxx_destruct;
- (void)_destroyAudioTap;
- (void)configurePlayerItem:(id)a0;
- (void)_analyzeSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(long long)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)removeObserver:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_itemAssetLoadedNotification:(id)a0;
- (void)_destroyFFTSetup;
- (BOOL)_shouldAttachToPlayerItem:(id)a0;
- (void)_freeBuffers;
- (void)_attachAudioTapToPlayerItem:(id)a0;
- (void)_itemInsertedNotification:(id)a0;

@end
