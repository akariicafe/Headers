@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView *_keyView;
}

- (id)factory;
- (void)setFactory:(id)a0;
- (void)prepareForDisplay;
- (id)keyplane;
- (void)setRenderConfig:(id)a0;
- (id)renderConfig;
- (void)dealloc;
- (id)contentsKeyView;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (id)layerForRenderFlags:(long long)a0;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawFrame;
- (void)displayLayer:(id)a0;
- (BOOL)requiresSublayers;
- (long long)imageOrientationForLayer:(id)a0;
- (void)changeBackgroundToEnabled;
- (void)changeBackgroundToActiveIfNecessary;
- (id)key;
- (BOOL)hasRendered;
- (void)dimKeys:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
