@class TSCH3DScene, TSCHChartInfo;

@interface TSCH3DChartTitlePositioner : NSObject {
    TSCH3DScene *_weakScene;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _cachedCategoryAxisLabelsSize;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _cachedValueAxisLabelsSize;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _cachedSeriesLabelsSize;
}

@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, weak, nonatomic) TSCH3DScene *scene;

+ (id)positionerWithInfo:(id)a0 scene:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyParagraphStyle:(id)a0 onLabelTransform:(void *)a1 alignmentDimension:(int)a2;
- (BOOL)hasScene:(id)a0;
- (id)initWithInfo:(id)a0 scene:(id)a1;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfCategoryAxisLabels;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfSeriesLabels;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfValueAxisLabels;
- (double)wrapWidthForSize:(struct CGSize { double x0; double x1; })a0 labelTransform:(const void *)a1;

@end
