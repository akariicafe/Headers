@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
    short _alternateGroupID;
}

- (void)setPreferredVolume:(float)a0;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithURL:(id)a0 fileType:(id)a1;
- (void)setMetadata:(id)a0;
- (void)setPreferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)canAddInputGroup:(id)a0;
- (BOOL)canAddInput:(id)a0;
- (void)setInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setShouldOptimizeForNetworkUse:(BOOL)a0;
- (void)setOutputFileTypeProfile:(id)a0;
- (void)setInitialMovieFragmentSequenceNumber:(long long)a0;
- (void)setMovieTimeScale:(int)a0;
- (id)initWithConfigurationState:(id)a0;
- (void)setProducesCombinableFragments:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)addInputGroup:(id)a0;
- (void)setPreferredRate:(float)a0;
- (void)setMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setRequiresInProcessOperation:(BOOL)a0;
- (void)addInput:(id)a0;
- (BOOL)_canAddInput:(id)a0 exceptionReason:(id *)a1;
- (void)setDefaultPropertyValuesToConfigurationState:(id)a0 outputURL:(id)a1 fileType:(id)a2;
- (BOOL)_canAddInputGroup:(id)a0 exceptionReason:(id *)a1;
- (void)setUsesVirtualCaptureCard:(BOOL)a0;
- (void)setDirectoryForTemporaryFiles:(id)a0;
- (void)startWriting;
- (void)setOverallDurationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (void)setSinglePassFileSize:(long long)a0;
- (void)cancelWriting;
- (void)setSinglePassMediaDataSize:(long long)a0;

@end
