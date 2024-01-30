@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BWRenderList : NSObject <BWRenderListParameterListProvider> {
    struct BWRenderListRendererList { struct BWRenderListRendererNode *slh_first; } _rendererList;
    struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *_originalMarkerRendererNode;
    struct BWRenderListParameterList { struct BWRenderListParameterNode *slh_first; } _parameterList;
    BOOL _isolationQueuePrepared;
    NSObject<OS_dispatch_queue> *_preparationIsolationQueue;
}

@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic) struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *rendererList;
@property (readonly, nonatomic) BOOL producesOriginalRender;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL affectsMetadata;
@property (readonly, nonatomic) NSSet *originalFilterNames;
@property (readonly, nonatomic) NSSet *processedFilterNames;
@property (readonly, nonatomic) struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *parameterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)shallowDepthOfFieldFilterName;

- (void)_continueOptimizingRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *)a0 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *)a1 withFilter:(id)a2 fromProvider:(id)a3 context:(struct BWRenderListOptimizationContext { short x0; struct BWRenderListRendererNode *x1; struct BWRenderListParameterNode *x2; struct BWRenderListRendererNode *x3; id x4; id x5; short x6; BOOL x7; id x8; BOOL x9; BOOL x10; } *)a4;
- (BOOL)_shouldUseMetalRendererForFilterWithName:(id)a0;
- (void)_appendSingleRendererOfType:(short)a0 forFilter:(id)a1 fromProvider:(id)a2 toRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *)a3 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *)a4 withContext:(struct BWRenderListOptimizationContext { short x0; struct BWRenderListRendererNode *x1; struct BWRenderListParameterNode *x2; struct BWRenderListRendererNode *x3; id x4; id x5; short x6; BOOL x7; id x8; BOOL x9; BOOL x10; } *)a5;
- (struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *)firstRendererNode;
- (BOOL)_shouldStreamingSDOFRendererConsumeFilter:(id)a0;
- (id)initWithResourceProvider:(id)a0 originalFilters:(id)a1 processedFilters:(id)a2 optimizationStrategy:(short)a3;
- (BOOL)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *)a0;
- (id)initWithAnimationSupported:(BOOL)a0 affectsMetadata:(BOOL)a1;
- (void)_finishOptimizingRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *)a0 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *)a1 fromProvider:(id)a2 context:(struct BWRenderListOptimizationContext { short x0; struct BWRenderListRendererNode *x1; struct BWRenderListParameterNode *x2; struct BWRenderListRendererNode *x3; id x4; id x5; short x6; BOOL x7; id x8; BOOL x9; BOOL x10; } *)a3;
- (void)dealloc;
- (id)copyParameters;
- (void)prepareWithParameters:(id)a0 forInputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (BOOL)_shouldUseOptimizationStrategyDependentSDOFRendererForFilterWithName:(id)a0;
- (void)_appendBatchRendererFromProvider:(id)a0 toRendererList:(struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *)a1 parameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *)a2 withContext:(struct BWRenderListOptimizationContext { short x0; struct BWRenderListRendererNode *x1; struct BWRenderListParameterNode *x2; struct BWRenderListRendererNode *x3; id x4; id x5; short x6; BOOL x7; id x8; BOOL x9; BOOL x10; } *)a3;

@end
