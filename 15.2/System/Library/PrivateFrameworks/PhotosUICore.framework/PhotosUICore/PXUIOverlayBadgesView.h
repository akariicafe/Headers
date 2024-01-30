@class NSDictionary, UIImageView, UIStackView;

@interface PXUIOverlayBadgesView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSDictionary *badges;
@property (weak, nonatomic) UIImageView *backgroundView;
@property (nonatomic) BOOL isShowingAnyBadge;

+ (id)defaultOrder;
+ (id)badgesViewWithDefaultBadgesAndOrder;
+ (id)defaultBadges;
+ (id)defaultViewForBadge:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBadges:(id)a0 order:(id)a1;
- (id)createWeaklyReferencedBackgroundView;
- (void)showBadges:(id)a0;
- (void)showBadgesForPHAsset:(id)a0;

@end
