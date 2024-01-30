@class UITapGestureRecognizer, NSString, SBHomeScreenMaterialView, SBFParallaxSettings, SBDarkeningImageView;
@protocol SBIconListLayout;

@interface SBIconContinuityAccessoryView : UIView <SBIconAccessoryView>

@property (readonly, nonatomic) SBDarkeningImageView *backgroundView;
@property (readonly, nonatomic) SBHomeScreenMaterialView *foregroundView;
@property (readonly, nonatomic) long long badgeType;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageForContinuityBadgeType:(long long)a0 highlighted:(BOOL)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (struct CGSize { double x0; double x1; })badgeSize;
- (void)setLegibilityStyle:(long long)a0;
- (struct CGPoint { double x0; double x1; })layoutOffset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)badgeContentScale;
- (void).cxx_destruct;
- (id)init;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)setAccessoryBrightness:(double)a0;
- (void)prepareForReuse;
- (BOOL)displayingAccessory;

@end
