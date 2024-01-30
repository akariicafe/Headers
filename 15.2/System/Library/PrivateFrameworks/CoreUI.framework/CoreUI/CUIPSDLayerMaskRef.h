@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (BOOL)isEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layerRef;
- (BOOL)isLinked;
- (id)initLayerMaskWithLayerRef:(id)a0;
- (id)initVectorMaskWithLayerRef:(id)a0;
- (void)dealloc;
- (struct CGPath { } *)newBezierPathAtScale:(double)a0;
- (BOOL)isInvertedWhenBlending;
- (struct CGPath { } *)newBezierPath;
- (struct CGImage { } *)createCGImageMask;

@end
