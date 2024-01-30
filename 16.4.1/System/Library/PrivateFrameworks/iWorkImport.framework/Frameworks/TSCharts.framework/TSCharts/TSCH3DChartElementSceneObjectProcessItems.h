@class TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline, TSCH3DChartElementSceneObject, TSCH3DChartElementProperties, NSMutableArray;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject {
    TSCH3DChartElementSceneObject *_sceneObject;
    TSCH3DSceneRenderPipeline *_pipeline;
    TSCH3DChartElementProperties *_properties;
    NSMutableArray *_delayedItems;
}

@property (readonly, nonatomic) BOOL pushStates;
@property (readonly, nonatomic) BOOL useBoundsGeometry;
@property (readonly, nonatomic) BOOL geometryOnly;
@property (readonly, nonatomic) TSCH3DRenderProcessor *processor;

+ (id)processItemsWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;

- (void).cxx_destruct;
- (void)processItems;
- (void)processDelayedItemsWithOpacity:(float)a0;
- (id)elementInfoWithSeries:(id)a0 position:(const void *)a1;
- (id)initWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;
- (BOOL)p_delayedItemsAreUnique;
- (void)p_processElementInfoWithSeries:(id)a0 position:(const void *)a1;
- (void)performItemsProcessing;

@end
