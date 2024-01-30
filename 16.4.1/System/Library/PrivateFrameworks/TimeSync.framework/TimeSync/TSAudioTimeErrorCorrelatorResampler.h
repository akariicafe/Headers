@interface TSAudioTimeErrorCorrelatorResampler : TSAudioTimeErrorCorrelator {
    float *_scratchBuffer;
    float *_channelABuffer;
    float *_channelBBuffer;
    float *_correlationBuffer;
    float *_upsamplerFilterCoefficientsBuffer;
    long long _upsamplerFilterCoefficientsLength;
}

- (void)dealloc;
- (void)_makeBlock;
- (id)initWithMaxCorrelationLength:(long long)a0 andUpscaleFactor:(long long)a1 forSamplingRate:(double)a2;

@end
