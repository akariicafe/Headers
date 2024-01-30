@class UIImage, UIView;

@interface PKPayLaterIconCell : PKDashboardCollectionViewCell {
    UIView *_view;
    UIImage *_icon;
    UIView *_imageView;
}

@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL hasCircleBorder;
@property (nonatomic) BOOL appearInactive;

- (void)setIcon:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setView:(id)a0;
- (void)prepareForReuse;
- (void)_setupImageView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_applyInactiveAppearance;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)setIconDate:(id)a0 animated:(BOOL)a1;

@end
