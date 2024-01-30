@class UIImageView, UIVisualEffectView;

@interface UICalloutBarBackground : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_selectionTintView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightRect;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)init;

@end
