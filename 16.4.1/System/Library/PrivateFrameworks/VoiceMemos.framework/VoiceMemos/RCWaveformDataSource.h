@class NSObject, NSString, NSURL, NSHashTable, RCMutableWaveform, RCWaveformGenerator;
@protocol OS_dispatch_queue;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    double _liveRecordingMergeTime;
}

@property (readonly, nonatomic) NSURL *generatedWaveformOutputURL;
@property (readonly, nonatomic) NSHashTable *weakObservers;
@property (readonly, nonatomic) BOOL hasStartedLoading;
@property (readonly, nonatomic) RCWaveformGenerator *waveformGenerator;
@property (readonly, nonatomic) RCMutableWaveform *accumulatorWaveform;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) BOOL canceled;
@property (readonly, nonatomic) float loadingProgress;
@property (nonatomic) double durationPerWaveformSlice;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct { double x0; double x1; } timeRangeToHighlight;
@property (readonly, nonatomic) double averagePowerLevelsRate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL hasSavedGeneratedWaveform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishLoadingWithCompletionTimeout:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (void)updateAccumulatorWaveformSegmentsWithBlock:(id /* block */)a0;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)a0;
- (id)waveformSegmentsIntersectingTimeRange:(struct { double x0; double x1; })a0;
- (void)mergeGeneratedWaveformIfNecessary;
- (void)saveGeneratedWaveformIfNecessary;
- (void)_performObserversBlock:(id /* block */)a0;
- (id)waveformSegmentsInTimeRange:(struct { double x0; double x1; })a0;
- (BOOL)shouldMergeLiveWaveform;
- (void)startLoading;
- (void)beginLoading;
- (void)_performOnObserversBlock:(id /* block */)a0;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (void)waveformGenerator:(id)a0 didLoadWaveformSegment:(id)a1;
- (void)cancelLoading;
- (BOOL)waitUntilFinished;
- (void)addObserver:(id)a0;
- (BOOL)setPaused:(BOOL)a0;
- (id)saveableWaveform;
- (void)waveformGeneratorWillBeginLoading:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithWaveformGenerator:(id)a0 generatedWaveformOutputURL:(id)a1;
- (void).cxx_destruct;

@end
