@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (void)registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (void)_registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)renderPipelineForIdentifier:(id)a0;
- (id)_renderPipelineForIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
