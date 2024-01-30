@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)canPerformMultiplePasses;
- (id)initWithConfigurationState:(id)a0;
- (void)dealloc;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)initWithWritingHelper:(id)a0;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (void)stopRequestingMediaData;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)currentPassDescription;
- (void)markCurrentPassAsFinished;
- (long long)status;
- (void)markAsFinished;
- (BOOL)isReadyForMoreMediaData;

@end
