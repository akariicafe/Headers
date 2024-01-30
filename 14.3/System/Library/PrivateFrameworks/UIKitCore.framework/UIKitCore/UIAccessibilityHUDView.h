@class UIBlurEffect, UIVisualEffectView, UIImageView, UIView, UILabel, UIAccessibilityHUDItem;

@interface UIAccessibilityHUDView : UIView {
    UIView *_transformContainer;
    UIVisualEffectView *_effectView;
    UIBlurEffect *_blurEffect;
    UIVisualEffectView *_itemEffectView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_customView;
}

@property (copy, nonatomic) UIAccessibilityHUDItem *item;

+ (struct CGSize { double x0; double x1; })preferredHUDSize;

- (id)imageView;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)layoutManager;
- (id)titleLabel;
- (id)customView;
- (void)layoutSubviews;
- (void)showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsetsForLayout;
- (id)containerViewForLayout;
- (id)initWithHUDItem:(id)a0;
- (id)_contentEffectsForItem:(id)a0;
- (void)_show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)itemContainerViewForLayout;
- (void)_updateLabelForItem;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
