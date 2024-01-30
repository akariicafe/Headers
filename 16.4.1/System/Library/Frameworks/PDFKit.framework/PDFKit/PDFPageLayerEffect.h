@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)a0 withLayer:(id)a1 forType:(long long)a2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLayer:(id)a1;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)a0 withLayer:(id)a1;

- (id)annotation;
- (id)UUID;
- (void)update;
- (void).cxx_destruct;
- (void)updateColor:(unsigned long long)a0;
- (void)addSelection:(id)a0;
- (id)initWithPDFPageLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (id)pdfResult;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelections:(id)a0;
- (BOOL)shouldRotateContent;

@end
