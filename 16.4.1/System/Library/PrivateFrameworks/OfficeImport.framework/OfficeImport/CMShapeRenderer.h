@interface CMShapeRenderer : NSObject

+ (void)renderFreeForm:(id)a0 fill:(id)a1 stroke:(id)a2 orientedBounds:(id)a3 state:(id)a4 drawingContext:(id)a5;
+ (struct CGColor { } *)_copyCGColorFromOADFill:(id)a0 andState:(id)a1;
+ (struct CGColor { } *)_copyCGColorFromOADColor:(id)a0 andState:(id)a1;
+ (void)_renderCGPath:(struct CGPath { } *)a0 stroke:(id)a1 fill:(id)a2 orientedBounds:(id)a3 state:(id)a4 drawingContext:(id)a5;
+ (void)_setupDrawingStyleInDrawingContext:(id)a0 dash:(id)a1 state:(id)a2;
+ (void)_setupDrawingStyleInDrawingContext:(id)a0 fill:(id)a1 stroke:(id)a2 state:(id)a3;
+ (void)_setupDrawingStyleInDrawingContext:(id)a0 stroke:(id)a1 state:(id)a2;
+ (struct CGImage { } *)copyImageFromOADImageFill:(id)a0 withContext:(id)a1;
+ (struct CGImage { } *)copyImageFromOADImageFill:(id)a0 withMapper:(id)a1;
+ (void)renderCanonicalShape:(int)a0 fill:(id)a1 stroke:(id)a2 adjustValues:(id)a3 orientedBounds:(id)a4 state:(id)a5 drawingContext:(id)a6;
+ (void)renderDiagramPath:(id)a0 fill:(id)a1 stroke:(id)a2 state:(id)a3 drawingContext:(id)a4;
+ (void)renderLine:(int)a0 stroke:(id)a1 adjustValues:(id)a2 orientedBounds:(id)a3 state:(id)a4 drawingContext:(id)a5;

@end
