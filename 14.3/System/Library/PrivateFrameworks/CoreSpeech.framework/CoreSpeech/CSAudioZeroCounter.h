@class NSString;

@interface CSAudioZeroCounter : NSObject {
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _zeroCounterWinSzForReport;
    unsigned int _maxContinuousZeroCount;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 sampleRate:(float)a1 numChannels:(unsigned int)a2;
- (void)resetWithSampleRate:(float)a0;
- (void)getZeroStatisticsFromBuffer:(id)a0 entireSamples:(unsigned int)a1;
- (void)stopReportZeroStatistics;

@end
