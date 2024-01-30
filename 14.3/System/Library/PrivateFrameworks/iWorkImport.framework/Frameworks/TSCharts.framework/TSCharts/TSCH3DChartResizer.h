@class TSCH3DChartBoundsLayout, TSCH3DChartScenePropertyAccessor, TSCH3DChartType, TSCH3DScene;

@interface TSCH3DChartResizer : NSObject {
    TSCH3DChartBoundsLayout *mLayout;
    TSCH3DChartType *mChartType;
    TSCH3DScene *mScene;
    TSCH3DChartScenePropertyAccessor *mAccessor;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } mPrevious;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } mCurrent;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mTarget;
    unsigned long long mIndex;
    struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } mLayoutSettings;
}

@property (nonatomic) float minStep;
@property (nonatomic) float precision;

+ (float)minimumSize;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 forScene:(id)a1;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
+ (float)perspectiveness;
+ (id)resizerWithLayout:(id)a0 chartType:(id)a1;

- (float)step;
- (void)loop;
- (void)dealloc;
- (void)setStep:(float)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clamp:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (id).cxx_construct;
- (void)setScale:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (float)minScale;
- (void)setContainingViewport:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (id)initWithLayout:(id)a0 chartType:(id)a1;
- (float)maxDepthRatio;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })converges;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 by:(float)a1;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clampDepthRatio:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
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
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportFromSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (void)adjustContainingViewport;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateResizerFromRequestedSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 startingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1;
- (void)initializeResizing:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (void)readjustContainingViewport;
- (float)containingViewportThreshold;
- (void)gingerClamp;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })resize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 startingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1;

@end
