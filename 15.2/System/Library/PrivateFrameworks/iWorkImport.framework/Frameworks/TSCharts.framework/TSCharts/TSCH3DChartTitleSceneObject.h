@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject

+ (void)setSelectionPath:(id)a0 selectionMode:(int)a1 forScene:(id)a2;
+ (struct CGSize { double x0; double x1; })p_labelWrapSizeForScene:(id)a0 returningSizeValue:(id *)a1;
+ (BOOL)supportsStyleProvidingSource;
+ (struct CGSize { double x0; double x1; })labelWrapSizeForScene:(id)a0;
+ (BOOL)setLabelWrapBounds:(const void *)a0 forScene:(id)a1;
+ (id)partWithChartInfo:(id)a0 styleProvidingSource:(id)a1;

- (void)renderLabels:(id)a0;
- (void)renderAnnotatedLabels:(id)a0;
- (id)renderInfoForSelectionPath:(id)a0 info:(id)a1;
- (BOOL)isAnnotated;
- (void)p_renderLabel:(id)a0;

@end
