@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (BOOL)isEnabled;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGImage { } *)createCGImageMask;
- (id)initLayerMaskWithLayerRef:(id)a0;
- (id)initVectorMaskWithLayerRef:(id)a0;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isLinked;
- (id)layerRef;
- (struct CGPath { } *)newBezierPath;
- (struct CGPath { } *)newBezierPathAtScale:(double)a0;

@end
