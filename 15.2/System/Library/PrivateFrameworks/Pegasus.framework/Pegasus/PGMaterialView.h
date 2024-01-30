@class PGCABackdropLayerView, UIColor, UIView;

@interface PGMaterialView : PGLayoutContainerView {
    UIView *_contentView;
    PGCABackdropLayerView *_backdropLayerView;
    UIColor *_backgroundColor;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isBackdropHidden) BOOL backdropHidden;

- (void)layoutSubviews;
- (double)_cornerRadius;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCornerRadius:(double)a0;
- (id)backgroundColor;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)setBackgroundColor:(id)a0;
- (BOOL)PG_preferredVisibilityForView:(id)a0;

@end
