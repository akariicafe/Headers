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

- (id)layoutManager;
- (void)layoutSubviews;
- (id)customView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)itemContainerViewForLayout;
- (void)showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithHUDItem:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsetsForLayout;
- (id)containerViewForLayout;
- (id)_contentEffectsForItem:(id)a0;
- (void)_updateLabelForItem;
- (id)titleLabel;
- (id)imageView;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
