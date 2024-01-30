@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layerRef;
- (id)initLayerMaskWithLayerRef:(id)a0;
- (id)initVectorMaskWithLayerRef:(id)a0;
- (struct CGPath { } *)newBezierPathAtScale:(double)a0;
- (BOOL)isInvertedWhenBlending;
- (struct CGPath { } *)newBezierPath;
- (struct CGImage { } *)createCGImageMask;
- (BOOL)isLinked;
- (BOOL)isEnabled;

@end
