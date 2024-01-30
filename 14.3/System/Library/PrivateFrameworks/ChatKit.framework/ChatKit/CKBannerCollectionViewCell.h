@class UIImageView;

@interface CKBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *bannerView;

+ (id)reuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithEntity:(id)a0;

@end
