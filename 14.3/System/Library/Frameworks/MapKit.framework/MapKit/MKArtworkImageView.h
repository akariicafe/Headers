@class UIImageView, UIColor;
@protocol MKArtworkImageSource;

@interface MKArtworkImageView : UIImageView {
    UIImageView *_cachedBadgeView;
}

@property (readonly, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) id<MKArtworkImageSource> imageSource;
@property (retain, nonatomic) UIColor *primaryTintColor;
@property (retain, nonatomic) UIColor *secondaryTintColor;

- (void).cxx_destruct;
- (void)_updateImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
