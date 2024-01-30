@class NSString, NSObject, NURenderer;
@protocol OS_dispatch_queue, MTLDevice;

@interface NUDevice : NSObject <NUDevice> {
    NURenderer *_noIntermediatesRenderer;
    NURenderer *_lowPriorityNoIntermediatesRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _defaultSampleMode;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly, nonatomic) BOOL hasOpenGLSupport;
@property (readonly, nonatomic) long long openGLVirtualScreen;
@property (readonly, nonatomic) NURenderer *renderer;
@property (readonly, nonatomic) NURenderer *lowPriorityRenderer;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (readonly, nonatomic) BOOL shouldRenderUsingMetal;
@property (readonly, nonatomic) BOOL shouldRenderUsingOpenGL;
@property (readonly, nonatomic) unsigned long long family;
@property (readonly, nonatomic) long long defaultSampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCaches;
- (id)init;
- (void).cxx_destruct;
- (id)renderer:(out id *)a0;
- (id)lowPriorityRenderer:(out id *)a0;
- (id)rendererWithoutIntermediateCaching:(out id *)a0;
- (id)lowPriorityRendererWithoutIntermediateCaching:(out id *)a0;
- (long long)_defaultSampleMode;
- (id)initWithName:(id)a0 model:(id)a1 metalDevice:(id)a2;
- (long long)_openGLVirtualScreen;
- (long long)_computeDefaultSampleMode;
- (long long)_preferredSampleMode;
- (BOOL)shouldLogRendererUsed;
- (id)_renderer:(out id *)a0;
- (id)_newRenderer:(out id *)a0;
- (id)_lowPriorityRenderer:(out id *)a0;
- (id)_newLowPriorityRenderer:(out id *)a0;
- (id)_rendererWithoutIntermediateCaching:(out id *)a0;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)_lowPriorityRendererWithoutIntermediateCaching:(out id *)a0;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;

@end
