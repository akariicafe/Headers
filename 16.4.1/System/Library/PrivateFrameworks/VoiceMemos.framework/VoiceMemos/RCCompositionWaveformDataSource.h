@class NSString, RCComposition, NSObject, _RCTimeRangeFileInputWaveformDataSource;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
}

@property (retain) _RCTimeRangeFileInputWaveformDataSource *activeFragmentDataSource;
@property (retain) NSObject<OS_dispatch_group> *loadingGroup;
@property (readonly, nonatomic) RCComposition *composition;
@property (readonly, nonatomic) BOOL preferLoadingFragmentWaveforms;
@property (nonatomic) BOOL saveGeneratedWaveform;
@property (nonatomic) BOOL highlightLastDecomposedFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (struct { double x0; double x1; })timeRangeToHighlight;
- (float)loadingProgress;
- (BOOL)shouldMergeLiveWaveform;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (void)waitUntilSegmentsFinishLoadingWithTimeout:(unsigned long long)a0;
- (void)cancelLoading;
- (BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)a0;
- (void)waveformDataSourceDidFinishLoading:(id)a0;
- (double)duration;
- (void)waveformDataSource:(id)a0 didLoadWaveformSegment:(id)a1;
- (id)saveableWaveform;
- (void)dealloc;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)_dataSourceForAVContentURL:(id)a0 isDecomposedFragment:(BOOL)a1 sourceTimeRange:(struct { double x0; double x1; })a2 destinationTime:(double)a3;

@end
