@class TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSArray, TSCH3DChartRep, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent> {
    TSCH3DChartRep *mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    NSArray *mSelection;
    float mNormalizedKnobRadius;
}

@property (readonly, nonatomic) NSMutableArray *projectedPoints;

+ (id)pipelineWithRep:(id)a0 scene:(id)a1 selection:(id)a2 normalizedKnobRadius:(float)a3;

- (BOOL)render;
- (void)dealloc;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;
- (void)clearParent;
- (void)getSelectionKnobsPositions:(id)a0;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)initWithRep:(id)a0 scene:(id)a1 selection:(id)a2 normalizedKnobRadius:(float)a3;

@end
