@interface TSAudioTimeErrorCorrelator : NSObject {
    long long _maxCorrelationLength;
    long long _upscaleFactor;
    double _samplingRate;
}

@property (copy, nonatomic) id /* block */ correlationBlock;

- (void).cxx_destruct;
- (id)initWithMaxCorrelationLength:(long long)a0 andUpscaleFactor:(long long)a1 forSamplingRate:(double)a2;
- (void)_calculateUpsamplerCoefficients:(float **)a0 length:(long long *)a1;

@end
