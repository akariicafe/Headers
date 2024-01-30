@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    float *_intermediateBuffer;
    float *_window;
    unsigned long long _windowSize;
    struct DSPSplitComplex { float *realp; float *imagp; } _fftBuffer;
    struct OpaqueFFTSetup { } *_fftSetup;
    BOOL _processing;
}

@property (nonatomic) float sampleRate;
@property (nonatomic) unsigned long long maxNumberOfFrames;

- (void)dealloc;
- (void)_freeBuffers;
- (id)initWithMaximumNumberOfFrames:(unsigned long long)a0 sampleRate:(float)a1;
- (void)_prepareBuffers;
- (void)_destroyFFTSetup;
- (void)analyzeFrequencies:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(unsigned long long)a1 observers:(id)a2;

@end
