@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView *_keyView;
}

- (void)prepareForDisplay;
- (void)displayLayer:(id)a0;
- (void)dimKeys:(id)a0;
- (id)factory;
- (id)contentsKeyView;
- (void)setScreenTraits:(id)a0;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (id)renderConfig;
- (id)layerForRenderFlags:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawFrame;
- (id)key;
- (BOOL)requiresSublayers;
- (long long)imageOrientationForLayer:(id)a0;
- (void)changeBackgroundToEnabled;
- (void)changeBackgroundToActiveIfNecessary;
- (void)setRenderConfig:(id)a0;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void)setFactory:(id)a0;
- (BOOL)hasRendered;
- (id)keyplane;
- (void)setNeedsDisplay;
- (void)dealloc;

@end
