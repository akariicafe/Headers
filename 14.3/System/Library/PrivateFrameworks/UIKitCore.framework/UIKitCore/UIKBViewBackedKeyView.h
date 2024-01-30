@class UIKBBackdropView, UIView;
@protocol UIKBKeyViewContentView;

@interface UIKBViewBackedKeyView : UIKBKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView;

- (void)setRenderConfig:(id)a0;
- (void).cxx_destruct;
- (void)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (id)renderFlagsForTraits:(id)a0;
- (void)layoutSubviews;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
