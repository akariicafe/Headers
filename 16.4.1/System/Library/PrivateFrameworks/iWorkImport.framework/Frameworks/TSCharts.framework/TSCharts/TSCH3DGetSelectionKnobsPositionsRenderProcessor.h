@class TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor

@property (retain, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate;
@property (retain, nonatomic) NSMutableArray *projectedPoints;
@property (nonatomic) float normalizedKnobRadius;

- (void)submit:(id)a0;
- (void).cxx_destruct;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })modelViewNormalizedProjection;

@end
