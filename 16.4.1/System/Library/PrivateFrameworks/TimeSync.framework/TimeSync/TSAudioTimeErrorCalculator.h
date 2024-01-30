@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject {
    long long _numberOfSamples;
    long long _maxMeasurements;
    long long _measurementsInBuffer;
    const float *_channelASamples;
    const float *_channelBSamples;
    double *_sampleTimestamps;
    double *_timeErrors;
    BOOL _calculatedTimeError;
    long long _interval;
    long long _correlationLength;
    long long _upscaleFactor;
    double _samplingRate;
    long long _correlationType;
    BOOL _noCopy;
}

@property (readonly, copy, nonatomic) NSArray *audioTimeErrors;
@property (readonly, copy, nonatomic) NSArray *timeErrors;

- (void)dealloc;
- (id)audioTimeErrors;
- (void)_processTimeErrorFromStartOffset:(long long)a0 atIndex:(long long)a1 withCount:(long long)a2;
- (void)calculateTimeError;
- (void)calculateTimeErrorFromStartOffset:(long long)a0 toEndOffset:(long long)a1;
- (void)calculateTimeErrorFromStartOffset:(long long)a0 toEndOffset:(long long)a1 withThreadingOption:(long long)a2;
- (void)calculateTimeErrorWithThreadingOption:(long long)a0;
- (BOOL)exportTimeErrorToDirectoryURL:(id)a0;
- (BOOL)exportTimeErrorToDirectoryURL:(id)a0 withFilename:(id)a1;
- (BOOL)exportTimeErrorToPath:(id)a0;
- (id)initNoCopyWithChannelA:(const float *)a0 andChannelB:(const float *)a1 ofLength:(long long)a2 withInterval:(long long)a3 correlationLength:(long long)a4 upscaleFactor:(long long)a5 atSamplingRate:(double)a6;
- (id)initNoCopyWithChannelA:(const float *)a0 andChannelB:(const float *)a1 ofLength:(long long)a2 withInterval:(long long)a3 correlationLength:(long long)a4 upscaleFactor:(long long)a5 atSamplingRate:(double)a6 correlationType:(long long)a7;
- (id)initWithChannelA:(const float *)a0 andChannelB:(const float *)a1 ofLength:(long long)a2 withInterval:(long long)a3 correlationLength:(long long)a4 upscaleFactor:(long long)a5 atSamplingRate:(double)a6;
- (id)initWithChannelA:(const float *)a0 andChannelB:(const float *)a1 ofLength:(long long)a2 withInterval:(long long)a3 correlationLength:(long long)a4 upscaleFactor:(long long)a5 atSamplingRate:(double)a6 correlationType:(long long)a7;
- (id)timeErrors;

@end
