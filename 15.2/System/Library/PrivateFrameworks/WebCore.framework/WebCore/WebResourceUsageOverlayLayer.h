@interface WebResourceUsageOverlayLayer : CALayer {
    void *m_overlay;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithResourceUsageOverlay:(void *)a0;

@end
