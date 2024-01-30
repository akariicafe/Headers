@class TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline, TSCH3DChartElementSceneObject, TSCH3DChartElementProperties, NSMutableArray;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {
    TSCH3DChartElementSceneObject *mSceneObject;
    TSCH3DSceneRenderPipeline *mPipeline;
    TSCH3DChartElementProperties *mProperties;
    NSMutableArray *mDelayedItems;
}

@property (readonly, nonatomic) BOOL pushStates;
@property (readonly, nonatomic) BOOL useBoundsGeometry;
@property (readonly, nonatomic) BOOL geometryOnly;
@property (readonly, nonatomic) TSCH3DRenderProcessor *processor;

+ (id)processItemsWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;

- (void)dealloc;
- (void)processItems;
- (void)clearParent;
- (id)initWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;
- (id)elementInfoWithSeries:(id)a0 position:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)p_processElementInfoWithSeries:(id)a0 position:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)performItemsProcessing;
- (BOOL)p_delayedItemsAreUnique;
- (void)processDelayedItemsWithOpacity:(float)a0;

@end
