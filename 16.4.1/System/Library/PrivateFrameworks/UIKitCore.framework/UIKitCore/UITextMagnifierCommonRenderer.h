@class NSDictionary, CALayer;

@interface UITextMagnifierCommonRenderer : UIView {
    BOOL m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    BOOL _isRegisteredForGeometryChanges;
}

- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (void)update;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (id)backgroundColourIfNecessary;
- (void)loadImages;
- (id)magnifier;
- (void)performOperations:(id /* block */)a0;
- (id)visualsForMagnifier;

@end
