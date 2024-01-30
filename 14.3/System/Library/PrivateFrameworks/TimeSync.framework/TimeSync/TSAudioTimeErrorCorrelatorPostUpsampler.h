@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {
    float *_channelABuffer;
    float *_scratch1Buffer;
    float *_scratch2Buffer;
    float *_correlationBuffer;
    float *_upsamplerFilterCoefficientsBuffer;
    long long _upsamplerFilterCoefficientsLength;
}

- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)a0 andUpscaleFactor:(long long)a1 forSamplingRate:(double)a2;
- (void)_makeBlock;

@end
