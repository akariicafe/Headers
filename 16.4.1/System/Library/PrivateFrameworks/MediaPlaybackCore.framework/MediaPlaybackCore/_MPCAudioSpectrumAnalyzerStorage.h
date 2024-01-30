@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    float *_intermediateBuffer;
    struct DSPSplitComplex { float *realp; float *imagp; } _fftBuffer;
    struct OpaqueFFTSetup { } *_fftSetup;
    BOOL _processing;
}

@property (nonatomic) float sampleRate;
@property (nonatomic) long long maxNumberOfFrames;
@property (nonatomic) long long halfN;
@property (nonatomic) long long log2N;

- (void)dealloc;
- (void)_freeBuffers;
- (void)_prepareBuffers;
- (void)_destroyFFTSetup;
- (void)analyzeAudioData:(void *)a0 numberFrames:(unsigned int)a1 observers:(id)a2;
- (void)analyzeFrequencies:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(unsigned long long)a1 observers:(id)a2;
- (id)initWithMaximumNumberOfFrames:(long long)a0 sampleRate:(float)a1;

@end
