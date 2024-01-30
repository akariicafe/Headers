@class MPSImageStatisticsMean;
@protocol MTLCommandQueue, MTLTexture;

@interface BWInferenceFusionTrackerMeanPixelCalculator : NSObject {
    id<MTLCommandQueue> _commandQueue;
    MPSImageStatisticsMean *_meanFilter;
    id<MTLTexture> _meanTexture;
}

- (void)dealloc;
- (id)initWithCommandQueue:(id)a0;
- (void)asyncMeanPixelForBuffer:(struct __CVBuffer { } *)a0 completionHandler:(id /* block */)a1;

@end
