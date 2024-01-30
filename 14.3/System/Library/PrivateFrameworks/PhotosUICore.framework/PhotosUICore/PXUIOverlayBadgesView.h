@class NSDictionary, UIImageView, UIStackView;

@interface PXUIOverlayBadgesView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSDictionary *badges;
@property (weak, nonatomic) UIImageView *backgroundView;
@property (nonatomic) BOOL isShowingAnyBadge;

+ (id)defaultBadges;
+ (id)defaultViewForBadge:(long long)a0;
+ (id)badgesViewWithDefaultBadgesAndOrder;
+ (id)defaultOrder;

- (id)init;
- (void).cxx_destruct;
- (void)showBadges:(id)a0;
- (void)showBadgesForPHAsset:(id)a0;
- (id)initWithBadges:(id)a0 order:(id)a1;
- (id)createWeaklyReferencedBackgroundView;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
