@class NSString, RCComposition, NSObject, _RCTimeRangeFileInputWaveformDataSource;
@protocol OS_dispatch_queue;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
}

@property (retain) _RCTimeRangeFileInputWaveformDataSource *activeFragmentDataSource;
@property (readonly, nonatomic) RCComposition *composition;
@property (readonly, nonatomic) BOOL preferLoadingFragmentWaveforms;
@property (nonatomic) BOOL saveGeneratedWaveform;
@property (nonatomic) BOOL highlightLastDecomposedFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoading;
- (float)loadingProgress;
- (id)saveableWaveform;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelLoading;
- (struct { double x0; double x1; })timeRangeToHighlight;
- (void)waveformDataSourceDidFinishLoading:(id)a0;
- (id)initWithComposition:(id)a0;
- (double)duration;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)a0;
- (BOOL)shouldMergeLiveWaveform;
- (void)waveformDataSource:(id)a0 didLoadWaveformSegment:(id)a1;
- (id)_dataSourceForAVContentURL:(id)a0 isDecomposedFragment:(BOOL)a1 sourceTimeRange:(struct { double x0; double x1; })a2 destinationTime:(double)a3;
- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;

@end
