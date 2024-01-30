@class NSString, NSObject, NURenderer;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

@interface NUDevice : NSObject <NUDevice> {
    NURenderer *_noIntermediatesRenderer;
    NURenderer *_lowPriorityNoIntermediatesRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLCommandQueue> _commandQueue;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly, nonatomic) NURenderer *renderer;
@property (readonly, nonatomic) NURenderer *lowPriorityRenderer;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (readonly, nonatomic) BOOL shouldRenderUsingMetal;
@property (readonly, nonatomic) unsigned long long family;
@property (readonly, nonatomic) long long defaultSampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCaches;
- (id)_lowPriorityRenderer:(out id *)a0;
- (void).cxx_destruct;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)init;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;
- (long long)_preferredSampleMode;
- (id)_newRenderer:(out id *)a0;
- (id)_metalCommandQueue;
- (void)executeMetal:(id /* block */)a0;
- (id)renderer:(out id *)a0;
- (id)lowPriorityRenderer:(out id *)a0;
- (id)rendererWithoutIntermediateCaching:(out id *)a0;
- (id)lowPriorityRendererWithoutIntermediateCaching:(out id *)a0;
- (id)initWithName:(id)a0 model:(id)a1 metalDevice:(id)a2;
- (long long)_defaultSampleMode;
- (BOOL)shouldLogRendererUsed;
- (id)_renderer:(out id *)a0;
- (id)_newLowPriorityRenderer:(out id *)a0;
- (id)_rendererWithoutIntermediateCaching:(out id *)a0;
- (id)_lowPriorityRendererWithoutIntermediateCaching:(out id *)a0;

@end
