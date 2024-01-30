@class UIImageView, UILabel, UIView;

@interface HUBadgeAndDisclosureAccessoryView : UIView

@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UIImageView *disclosureImageView;
@property (nonatomic) long long badgeCount;

+ (id)_disclosureImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
