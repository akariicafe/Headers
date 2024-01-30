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

- (id)_dataSourceForAVContentURL:(id)a0 isDecomposedFragment:(BOOL)a1 sourceTimeRange:(struct { double x0; double x1; })a2 destinationTime:(double)a3;
- (id)saveableWaveform;
- (struct { double x0; double x1; })timeRangeToHighlight;
- (id)initWithComposition:(id)a0;
- (float)loadingProgress;
- (void)startLoading;
- (BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)a0;
- (void)cancelLoading;
- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (void)waveformDataSourceDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (void)waveformDataSource:(id)a0 didLoadWaveformSegment:(id)a1;
- (BOOL)shouldMergeLiveWaveform;
- (void)dealloc;

@end
