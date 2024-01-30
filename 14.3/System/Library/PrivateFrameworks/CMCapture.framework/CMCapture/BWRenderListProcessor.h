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

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingRenderList:(id)a1;
- (void)_processRenderList:(id)a0 parameterListProvider:(id)a1 inputPixelBuffer:(struct __CVBuffer { } *)a2 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 resultHandler:(id /* block */)a4;
- (void)dealloc;
- (void)_finishRenderingUsingRenderList:(id)a0 result:(unsigned long long)a1 resultError:(id)a2 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 finalResultHandler:(id /* block */)a5;
- (id)initWithRenderingPool:(id)a0;
- (void)processRenderList:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 resultHandler:(id /* block */)a3;
- (void)waitForAllProcessingToComplete;
- (void)processRenderList:(id)a0 withParameters:(id)a1 inputPixelBuffer:(struct __CVBuffer { } *)a2 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 resultHandler:(id /* block */)a4;
- (void)_continueRenderingUsingRenderList:(id)a0 result:(unsigned long long)a1 resultError:(id)a2 fromRendererNode:(struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *)a3 parameterNode:(struct BWRenderListParameterNode { struct { struct BWRenderListParameterNode *x0; } x0; id x1; } *)a4 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a5 inputPixelBuffer:(struct __CVBuffer { } *)a6 finalResultHandler:(id /* block */)a7;
- (void)_emitProcessedSampleBufferFromRenderList:(id)a0 result:(unsigned long long)a1 resultError:(id)a2 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 finalResultHandler:(id /* block */)a5;

@end
