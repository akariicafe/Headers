@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal { id x0; id x1; struct OpaqueFigSubtitleRenderer *x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct __CFDictionary *x4; struct __CFArray *x5; unsigned int x6; } *layerInternal;
}

- (void)setViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSublayers;
- (void)setReLayout;
- (struct __CFString { } *)getContentID;
- (void)handleNeedsLayoutNotification;
- (void)setContent:(struct __CFDictionary { } *)a0;
- (id)init;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { } *)a0;
- (void)setNeedsDisplay;
- (void)dealloc;

@end
