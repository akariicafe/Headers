@class BWPixelBufferPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWRenderListProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_configurationMutexQueue;
    BOOL _configurationQueueAlwaysEmitsOriginalResult;
    NSObject<OS_dispatch_group> *_renderingGroup;
    struct opaqueCMFormatDescription { } *_mostRecentFormatDescription;
}

@property (readonly, nonatomic) BWPixelBufferPool *renderingPool;
@property (nonatomic) BOOL alwaysEmitsOriginalResult;

+ (void)initialize;

- (void)processRenderList:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 resultHandler:(id /* block */)a3;
- (id)initWithRenderingPool:(id)a0;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingRenderList:(id)a1;
- (void)waitForAllProcessingToComplete;
- (void)dealloc;
- (void)processRenderList:(id)a0 withParameters:(id)a1 inputPixelBuffer:(struct __CVBuffer { } *)a2 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 resultHandler:(id /* block */)a4;

@end
