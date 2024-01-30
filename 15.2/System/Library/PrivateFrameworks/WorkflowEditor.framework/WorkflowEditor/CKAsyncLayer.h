@interface CKAsyncLayer : CALayer {
    int _displaySentinel;
    BOOL _needsAsyncDisplayOnly;
}

@property unsigned long long displayMode;

+ (id)defaultValueForKey:(id)a0;
+ (void)drawInContext:(struct CGContext { } *)a0 parameters:(id)a1;
+ (id)displayQueue;
+ (id /* block */)asyncDisplayBlockWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 opaque:(BOOL)a2 backgroundColor:(struct CGColor { } *)a3 displaySentinel:(int *)a4 expectedDisplaySentinelValue:(int)a5 drawingDelegate:(id)a6 drawParameters:(id)a7;
+ (void)drawAsyncLayerInContext:(struct CGContext { } *)a0 parameters:(id)a1;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)name;
- (void)setNeedsDisplay;
- (void)display;
- (id)drawParameters;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)a0;
- (void)didDisplayAsynchronously:(id)a0 withDrawParameters:(id)a1;
- (void)setNeedsAsyncDisplay;
- (void)cancelAsyncDisplay;

@end
