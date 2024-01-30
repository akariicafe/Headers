@interface MPCAudioSpectrumObserver : NSObject {
    struct _MPCAudioSpectrumAnalyzerBandInternal { struct MPCAudioSpectrumAnalyzerBand { float x0; float x1; } x0; float x1; float x2; float x3; unsigned long long x4; } *_bands;
    unsigned long long _bandsStorageSize;
}

@property (readonly, nonatomic) long long numberOfBands;
@property (copy, nonatomic) id /* block */ onUpdate;

+ (id)defaultObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (void)beginReport;
- (void)finishReport;
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand { float x0; float x1; })a0;
- (void)_resizeBandStorage;
- (float)averagePowerOfBandAtIndex:(long long)a0 band:(out struct MPCAudioSpectrumAnalyzerBand { float x0; float x1; } *)a1;

@end
