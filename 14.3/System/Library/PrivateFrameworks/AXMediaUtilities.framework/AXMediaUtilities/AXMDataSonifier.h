@class AXMLiveContinuousTone, NSTimer, NSPointerArray, AXMAudioDataSourceMixer, AXMAudioDataSource, AXMADSREnvelope;

@interface AXMDataSonifier : NSObject {
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    struct { double *values; double scaleMinimum; double scaleMaximum; double valueMinimum; double valueMaximum; double count; } _xData;
    struct { double *values; double scaleMinimum; double scaleMaximum; double valueMinimum; double valueMaximum; double count; } _yData;
}

@property (retain, nonatomic) NSTimer *playbackObserverUpdateTimer;
@property (retain, nonatomic) AXMAudioDataSourceMixer *playbackMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *playbackChartDataAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *playbackTrendlineAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSourceMixer *scrubbingMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingDiscreteAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingContinuousAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSource *scrubbingTrendlineAudioDataSource;
@property (retain, nonatomic) AXMAudioDataSourceMixer *liveContinuousMixerDataSource;
@property (retain, nonatomic) AXMAudioDataSource *liveContinuousAudioDataSource;
@property (retain, nonatomic) NSPointerArray *playbackObservers;
@property (readonly, nonatomic) int interpolationMode;
@property (readonly, nonatomic) AXMLiveContinuousTone *continuousScrubbingTone;
@property (readonly, nonatomic) AXMLiveContinuousTone *trendlineScrubbingTone;
@property (readonly, nonatomic) AXMLiveContinuousTone *liveContinuousDataTone;
@property (copy, nonatomic) id /* block */ trendlineFunction;
@property (readonly, nonatomic) BOOL isEndingScrubbing;
@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *scrubbingDiscreteDataRenderingContext;
@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *scrubbingPlaybackCallbackRenderingContext;
@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *liveTonePlaybackCallbackRenderingContext;
@property (readonly, nonatomic) unsigned long long playbackSampleCount;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) BOOL isInLiveContinuousToneSession;
@property (readonly, nonatomic) double currentPlaybackPosition;
@property (nonatomic) double minimumPlaybackFrequency;
@property (nonatomic) double maximumPlaybackFrequency;
@property (nonatomic) double playbackDuration;
@property (retain, nonatomic) AXMADSREnvelope *ampEnvelope;
@property (nonatomic) unsigned long long toneWaveform;
@property (nonatomic) BOOL usesBinauralPanning;
@property (readonly, nonatomic) int dataMode;
@property (readonly, nonatomic) id /* block */ function;

+ (id)sharedInstance;

- (void)play;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_initializeAudioUnit;
- (BOOL)_uninitializeAudioUnit;
- (void)scrubToPlaybackFrame:(unsigned long long)a0;
- (id)_newContinuousToneEnvelope;
- (void)stopScrubbing;
- (double)frequencyForYAxisValue:(double)a0;
- (void)_peakNormalizeBuffer:(struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)a0 length:(unsigned long long)a1 level:(double)a2;
- (BOOL)hasContinuousDataForXPosition:(double)a0;
- (double)interpolatedYAxisValueForNormalizedPosition:(double)a0;
- (double)xAxisValueForPosition:(double)a0;
- (void)dealloc;
- (void)_initializeAXMAudioDataSources;
- (void)_renderDiscreteAudio;
- (void)_renderContinuousAudio;
- (void)_renderUnivariateFunctionAudio;
- (unsigned long long)sampleIndexForXAxisValue:(double)a0;
- (double)timeOffsetForXAxisValue:(double)a0;
- (BOOL)_initializeAudioComponent;
- (BOOL)_setAudioFormat;
- (BOOL)_setOutputCallback;
- (double)normalizedXAxisValueForValue:(double)a0;
- (double)normalizedYAxisValueForValue:(double)a0;
- (void)_initializeLiveToneDataSource;
- (void)addPlaybackObserver:(id)a0;
- (void)removePlaybackObserver:(id)a0;
- (unsigned long long)sampleIndexForTimeOffset:(double)a0;
- (void)beginLiveContinuousToneSession;
- (void)endLiveContinuousToneSession;
- (void)loadDataAndRenderAudioForXAxis:(double *)a0 yAxis:(double *)a1 numValues:(unsigned long long)a2 axisMinimumX:(double)a3 axisMaximumX:(double)a4 axisMinimumY:(double)a5 axisMaximumY:(double)a6 interpolationMode:(int)a7 trendline:(id /* block */)a8;
- (void)setLiveContinuousToneNormalizedFrequency:(double)a0;
- (void)stopPlaying;
- (void)setPlaybackPosition:(double)a0;
- (void)pause;
- (void)endScrubbing;
- (void)beginScrubbing;

@end
