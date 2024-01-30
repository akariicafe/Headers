@class CSAudioUnitMeterClipping;

@interface CSAudioPowerMeter : NSObject {
    int _averagePowerI;
    double _averagePowerF;
    BOOL _instantaneousMode;
    double _peak;
    double _maxPeak;
    double _decay;
    double _peakDecay;
    double _averagePowerPeak;
    int _peakHoldCount;
    double _sampleRate;
    int _previousBlockSize;
    double _decay1;
    double _peakDecay1;
    CSAudioUnitMeterClipping *_clipping;
}

- (void)_reset;
- (void).cxx_destruct;
- (void)reset;
- (double)_ampToDB:(double)a0;
- (double)_linearToDB:(double)a0;
- (void)_savePeaks:(int)a0 averagePower:(int)a1 maxSample:(int)a2;
- (void)_scaleDecayConstants:(int)a0;
- (void)_zapgremlins:(double *)a0;
- (double)getAveragePowerDB;
- (double)getPeakPowerDB;
- (id)initWithSampleRate:(float)a0;
- (void)processFloatBuffer:(const float *)a0 stride:(int)a1 inFrameToProcess:(int)a2;
- (void)processShortBuffer:(const short *)a0 stride:(int)a1 inFrameToProcess:(int)a2;

@end
