@class UIBezierPath;

@interface _UITileLayer : CALayer {
    UIBezierPath *maskPath;
    _Atomic BOOL pendingDeferredOffscreenSetNeedsDisplay;
}

- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)setNeedsDisplay;

@end
