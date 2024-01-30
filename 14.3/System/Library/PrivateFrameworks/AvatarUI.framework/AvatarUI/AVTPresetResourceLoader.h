@class AVTUIEnvironment, NSObject, AVTInMemoryResourceCache;
@protocol AVTTaskScheduler, AVTImageCache, OS_dispatch_queue, AVTUILogger;

@interface AVTPresetResourceLoader : NSObject

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTInMemoryResourceCache *presetCache;
@property (readonly, nonatomic) id<AVTImageCache> inMemoryImageCache;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id<AVTUILogger> logger;

- (void).cxx_destruct;
- (id)preLoadResourcesForSectionItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)preLoadResourcesForPresetResourcesProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPresetCache:(id)a0 renderingScheduler:(id)a1 callbackQueue:(id)a2 environment:(id)a3;
- (void)startSectionItemPreloadingTask:(id)a0;
- (void)performSectionItemPreloadingTask:(id)a0;
- (void)performPresetLoadingForPresetResources:(id)a0 task:(id)a1;
- (void)startPresetPreloadingTask:(id)a0;
- (void)performPresetResourcesPreloadingTask:(id)a0;
- (id)initWithEnvironment:(id)a0 renderingScheduler:(id)a1 callbackQueue:(id)a2;

@end
