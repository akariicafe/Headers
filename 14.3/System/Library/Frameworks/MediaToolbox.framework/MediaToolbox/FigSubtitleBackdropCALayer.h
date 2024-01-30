@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleBackdropCALayerInternal { id x0; id x1; BOOL x2; BOOL x3; double x4; id x5; id x6; id x7; } *bdLayerInternal;
}

- (void)setNeedsLayout;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCornerRadius:(double)a0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setContents:(id)a0;
- (BOOL)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateWindowOpacity:(double)a0;
- (void)updateHDRContentState:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;

@end
