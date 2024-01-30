@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (void)markAsFinished;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)canPerformMultiplePasses;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (id)currentPassDescription;
- (long long)status;
- (void)stopRequestingMediaData;
- (void)markCurrentPassAsFinished;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)dealloc;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithWritingHelper:(id)a0;

@end
