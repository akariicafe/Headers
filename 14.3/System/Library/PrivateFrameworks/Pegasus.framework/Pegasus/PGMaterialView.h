@class PGCABackdropLayerView, UIColor, UIView;

@interface PGMaterialView : PGLayoutContainerView {
    UIView *_contentView;
    PGCABackdropLayerView *_backdropLayerView;
    UIColor *_backgroundColor;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isBackdropHidden) BOOL backdropHidden;

- (void)_setCornerRadius:(double)a0;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (BOOL)PG_preferredVisibilityForView:(id)a0;
- (void)layoutSubviews;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;

@end
