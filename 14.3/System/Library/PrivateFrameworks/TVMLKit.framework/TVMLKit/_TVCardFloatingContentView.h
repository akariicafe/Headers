@class UIImage, NSString, UIView;

@interface _TVCardFloatingContentView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    double _unfocusedAlpha;
    BOOL _isSelected;
}

@property (copy, nonatomic) id /* block */ pressCompletionBlock;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic) double focusedShadowAlpha;
@property (retain, nonatomic) UIImage *unfocusedShadowImage;
@property (retain, nonatomic) UIImage *focusedShadowImage;
@property (nonatomic) struct CGSize { double width; double height; } focusedShadowCardSize;
@property (nonatomic) struct CGSize { double width; double height; } unfocusedShadowCardSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)prepareForReuse;
- (void)floatingContentView:(id)a0 didFinishTransitioningToState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateForAccessibilityChange;
- (void)setBgColor:(id)a0 highlightBgColor:(id)a1 cornerRadius:(double)a2;

@end
