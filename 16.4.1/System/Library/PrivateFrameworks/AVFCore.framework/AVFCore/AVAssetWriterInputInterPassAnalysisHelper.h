@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)stopRequestingMediaData;
- (void)markCurrentPassAsFinished;
- (BOOL)canPerformMultiplePasses;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (id)currentPassDescription;
- (id)initWithConfigurationState:(id)a0;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)dealloc;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (long long)status;
- (id)initWithWritingHelper:(id)a0;
- (BOOL)shouldRespondToInitialPassDescription;
- (void)startPassAnalysis;

@end
