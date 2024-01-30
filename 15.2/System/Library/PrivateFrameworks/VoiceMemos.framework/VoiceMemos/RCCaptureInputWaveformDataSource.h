@class NSString, NSArray, RCMutableComposition, RCWaveform, RCCompositionFragment, RCMutableCompositionFragment, RCComposition, RCCompositionWaveformDataSource;

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate, RCWaveformDataSourceObserver> {
    double captureDelta;
}

@property (readonly, nonatomic) RCWaveform *baseWaveform;
@property (readonly, nonatomic) RCCompositionWaveformDataSource *baseWaveformDataSource;
@property (readonly, nonatomic) double updatedCapturedFragmentDuration;
@property (readonly, nonatomic) double finalCapturedFragmentDuration;
@property (readonly, nonatomic) BOOL canUpdateCaptureComposition;
@property (readonly, nonatomic) double captureInsertionTimeInComposition;
@property (readonly, nonatomic) double captureInsertionDurationInComposition;
@property (readonly, nonatomic) NSArray *captureInitialDecomposedFragments;
@property (readonly, nonatomic) RCComposition *destinationComposition;
@property (readonly, nonatomic) RCCompositionFragment *destinationFragment;
@property (readonly, nonatomic) RCMutableComposition *capturedComposition;
@property (readonly, nonatomic) RCMutableCompositionFragment *capturedFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)a0;
- (struct { double x0; double x1; })timeRangeToHighlight;
- (id)waveformSegmentsInTimeRange:(struct { double x0; double x1; })a0;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)a0;
- (id)waveformSegmentsIntersectingTimeRange:(struct { double x0; double x1; })a0;
- (void)_captureSesionCompletedWithFinalizedDuration:(double)a0;
- (void)waveformDataSourceRequiresUpdate:(id)a0;
- (void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)a0;
- (void)startLoading;
- (id)initWithDestinationComposition:(id)a0 destinationFragment:(id)a1;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)a0;
- (void)undoCapture;
- (void)_initializeCaptureComposition;
- (void)cancelLoading;
- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (void)waveformDataSourceDidFinishLoading:(id)a0;
- (BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)a0;
- (void).cxx_destruct;
- (BOOL)setPaused:(BOOL)a0;
- (double)duration;
- (BOOL)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)a0;
- (void)waveformDataSource:(id)a0 didLoadWaveformSegment:(id)a1;
- (BOOL)shouldMergeLiveWaveform;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)a0 finalizedFragmentDuration:(double)a1 completionBlock:(id /* block */)a2;
- (void)flushPendingCapturedSampleBuffers;
- (void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)a0;
- (id)_captureSegmentsInComponentWaveform:(id)a0 captureTimeRange:(struct { double x0; double x1; })a1 componentWaveformSegmentOffset:(double)a2;
- (void)updateCapturedDelta:(double)a0;
- (double)_fragmentDuration;
- (BOOL)waitUntilFinished;
- (void)_updateCapturedComposition:(BOOL)a0;

@end
