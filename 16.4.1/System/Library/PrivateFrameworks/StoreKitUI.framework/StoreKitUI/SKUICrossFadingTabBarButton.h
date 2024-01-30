@class _Badge, NSString, UIImageView, UIImage, UILabel;

@interface SKUICrossFadingTabBarButton : UIControl {
    UILabel *_selectedTitleLabel;
    UIImageView *_selectedImageView;
    UILabel *_standardTitleLabel;
    UIImageView *_standardImageView;
    _Badge *_badge;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) double selectionProgress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setBadgeValue:(id)a0;
- (void)_positionBadge;

@end
