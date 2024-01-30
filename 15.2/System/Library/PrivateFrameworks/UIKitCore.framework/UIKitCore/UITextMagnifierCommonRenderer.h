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

- (id)visualsForMagnifier;
- (id)backgroundColourIfNecessary;
- (void)performOperations:(id /* block */)a0;
- (void)didMoveToSuperview;
- (id)magnifier;
- (void)update;
- (void).cxx_destruct;
- (void)loadImages;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;

@end
