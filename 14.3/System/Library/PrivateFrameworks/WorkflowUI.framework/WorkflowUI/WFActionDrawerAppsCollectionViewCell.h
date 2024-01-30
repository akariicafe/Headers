@class NSString, UIImageView, UIImage, UILabel;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>

@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *appIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSize;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithTitle:(id)a0 appIconImage:(id)a1;

@end
