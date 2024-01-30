@class TSCH3DScene, TSUWeakReference, TSCHChartInfo;

@interface TSCH3DChartTitlePositioner : NSObject {
    TSUWeakReference *mWeakScene;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mCachedCategoryAxisLabelsSize;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mCachedValueAxisLabelsSize;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mCachedSeriesLabelsSize;
}

@property (readonly, retain, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) TSCH3DScene *scene;

+ (id)positionerWithInfo:(id)a0 scene:(id)a1;

- (void)dealloc;
- (id).cxx_construct;
- (BOOL)hasScene:(id)a0;
- (double)wrapWidthForSize:(struct CGSize { double x0; double x1; })a0 labelTransform:(const struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; } *)a1;
- (id)initWithInfo:(id)a0 scene:(id)a1;
- (void)applyParagraphStyle:(id)a0 onLabelTransform:(struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; } *)a1 alignmentDimension:(int)a2;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfCategoryAxisLabels;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfValueAxisLabels;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfSeriesLabels;

@end
