@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {
    _UILabelContentLayer *_contentLayer;
    BOOL _contentInsetsValid;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

- (void)setNeedsDisplayOnBoundsChange:(BOOL)a0;
- (void)setContentsMultiplyColor:(struct CGColor { } *)a0;
- (void)layoutSublayers;
- (void)updateContentInsets;
- (void)invalidateContentInsets;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)_clearContents;
- (void)setContentsFormat:(id)a0;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsGravity:(id)a0;
- (void)_setLabelMasksToBoundsForAnimation:(BOOL)a0;
- (void)setMasksToBounds:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentLayer;

@end
