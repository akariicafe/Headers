@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator {
    float *_channelABuffer;
    float *_scratchBuffer;
    float *_correlationBuffer;
    float *_interpollationIndiciesBuffer;
}

- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)a0 andUpscaleFactor:(long long)a1 forSamplingRate:(double)a2;
- (void)_makeBlock;

@end
