@interface AKTextAnnotationRenderHelper : NSObject

+ (BOOL)_hitTestPoint:(struct CGPoint { double x0; double x1; })a0 againstActualTextForAnnotation:(id)a1 onPageController:(id)a2 contextForVisualDebugging:(struct CGContext { } *)a3;
+ (id)_sharedLayoutManager;
+ (void)getAnnotationRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 textBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 containerSize:(struct CGSize { double x0; double x1; } *)a2 exclusionPaths:(id *)a3 isTextClipped:(BOOL *)a4 forAnnotation:(id)a5 onPageController:(id)a6 orInContext:(struct CGContext { } *)a7 shouldAlignToPixels:(BOOL)a8 optionalText:(id)a9 optionalCenter:(struct CGPoint { double x0; double x1; })a10 optionalProposedRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a11;
+ (BOOL)hitTestPoint:(struct CGPoint { double x0; double x1; })a0 againstActualTextForAnnotation:(id)a1 onPageController:(id)a2;
+ (void)renderAnnotationText:(id)a0 intoContext:(struct CGContext { } *)a1 isForScreen:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGSize { double x0; double x1; })unconstrainedSizeForText:(id)a0;

@end
