@class TSCH3DChartBoundsLayout, TSCH3DChartScenePropertyAccessor, TSCH3DChartType, TSCH3DScene;

@interface TSCH3DChartResizer : NSObject {
    TSCH3DChartBoundsLayout *_layout;
    TSCH3DChartType *_chartType;
    TSCH3DScene *_scene;
    TSCH3DChartScenePropertyAccessor *_accessor;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } _previous;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } _current;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _target;
    unsigned long long _index;
    struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } _layoutSettings;
}

@property (nonatomic) float minStep;
@property (nonatomic) float precision;

+ (float)minimumSize;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(const void *)a0 forScene:(id)a1;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(const void *)a0;
+ (float)perspectiveness;
+ (id)resizerWithLayout:(id)a0 chartType:(id)a1;

- (void)loop;
- (float)step;
- (float)minScale;
- (void)setStep:(float)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setScale:(void *)a0;
- (id).cxx_construct;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clamp:(void *)a0;
- (void)setContainingViewport:(void *)a0;
- (id)initWithLayout:(id)a0 chartType:(id)a1;
- (float)maxDepthRatio;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })converges;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(void *)a0 by:(float)a1;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(void *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clampDepthRatio:(void *)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportFromCurrentSize;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })canImprove;
- (void)updateResizeData;
- (BOOL)currentCanImprove;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScale;
- (void)updateSteps;
- (BOOL)checkImprovement;
- (BOOL)allConverges;
- (BOOL)resize1;
- (float)perspectiveness;
- (void)seedResizeCondition;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportFromSize:(void *)a0;
- (void)adjustContainingViewport;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateResizerFromRequestedSize:(const void *)a0 startingSize:(void *)a1;
- (void)initializeResizing:(void *)a0;
- (void)readjustContainingViewport;
- (float)containingViewportThreshold;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })resize:(const void *)a0 startingSize:(void *)a1;

@end
