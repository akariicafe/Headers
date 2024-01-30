@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)a0 withLayer:(id)a1 forType:(long long)a2;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)a0 withLayer:(id)a1;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLayer:(id)a1;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;

- (void).cxx_destruct;
- (id)annotation;
- (id)UUID;
- (void)update;
- (void)updateColor:(unsigned long long)a0;
- (void)addSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (BOOL)shouldRotateContent;
- (void)setSelections:(id)a0;
- (id)pdfResult;
- (id)initWithPDFPageLayer:(id)a0;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
