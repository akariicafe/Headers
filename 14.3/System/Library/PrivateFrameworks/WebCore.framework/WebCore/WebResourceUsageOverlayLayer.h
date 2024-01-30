@interface WebResourceUsageOverlayLayer : CALayer {
    struct ResourceUsageOverlay { void /* function */ **x0; struct Page *x1; struct RefPtr<WebCore::PageOverlay, WTF::DumbPtrTraits<WebCore::PageOverlay> > { struct PageOverlay *x0; } x2; BOOL x3; struct IntPoint { int x0; int x1; } x4; struct RetainPtr<CALayer> { void *x0; } x5; struct RetainPtr<CALayer> { void *x0; } x6; } *m_overlay;
}

- (id)initWithResourceUsageOverlay:(struct ResourceUsageOverlay { void /* function */ **x0; struct Page *x1; struct RefPtr<WebCore::PageOverlay, WTF::DumbPtrTraits<WebCore::PageOverlay> > { struct PageOverlay *x0; } x2; BOOL x3; struct IntPoint { int x0; int x1; } x4; struct RetainPtr<CALayer> { void *x0; } x5; struct RetainPtr<CALayer> { void *x0; } x6; } *)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
