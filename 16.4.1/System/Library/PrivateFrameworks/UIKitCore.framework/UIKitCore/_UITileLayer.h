@class UIBezierPath;

@interface _UITileLayer : CALayer {
    UIBezierPath *maskPath;
    _Atomic BOOL pendingDeferredOffscreenSetNeedsDisplay;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;
- (void)setNeedsDisplay;
- (void).cxx_destruct;

@end
