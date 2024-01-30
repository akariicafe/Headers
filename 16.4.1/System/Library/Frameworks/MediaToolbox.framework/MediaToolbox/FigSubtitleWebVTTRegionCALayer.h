@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal { id x0; id x1; struct OpaqueFigSubtitleRenderer *x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct __CFDictionary *x4; struct __CFArray *x5; unsigned int x6; } *layerInternal;
}

- (void)setViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleNeedsLayoutNotification;
- (void)setNeedsDisplay;
- (void)setContent:(struct __CFDictionary { } *)a0;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { } *)a0;
- (struct __CFString { } *)getContentID;
- (void)setReLayout;

@end
