@class NSUUID, UIImageView, UIImage, UILabel, NSString;

@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double imageInsetPercentage;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
