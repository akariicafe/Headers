@interface WKInspectorHighlightView : UIView {
    struct RetainPtr<NSMutableArray<CAShapeLayer *>> { void *m_ptr; } _layers;
    struct RetainPtr<NSMutableArray<CALayer *>> { void *m_ptr; } _gridOverlayLayers;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update:(const void *)a0 scale:(double)a1;
- (void)_createLayers:(unsigned long long)a0;
- (void)_removeAllLayers;
- (void)_layoutForNodeHighlight:(const void *)a0 offset:(unsigned int)a1;
- (id)_createGridOverlayLayer:(const void *)a0 scale:(double)a1;
- (void)_layoutForNodeListHighlight:(const void *)a0;
- (void)_layoutForRectsHighlight:(const void *)a0;
- (void)_createGridOverlayLayers:(const void *)a0 scale:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
