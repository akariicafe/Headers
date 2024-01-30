@class NSString;

@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal { id x0; id x1; struct OpaqueFigSubtitleRenderer *x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct __CFAttributedString *x4; unsigned char x5; } *layerInternal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (struct __CFString { } *)getContentID;
- (void)setDefaultFontSize:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSuggestedBounds:(unsigned char)a0;
- (void)setCuePosition:(struct CGPoint { double x0; double x1; })a0;
- (unsigned char)isDirty;
- (void)setContent:(struct __CFAttributedString { } *)a0;
- (id)init;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { } *)a0;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;

@end
