@class SBFParallaxSettings, NSString, UIImageView, SBHIconAccessoryCountedMapImageTuple, SBDarkeningImageView;
@protocol SBIconListLayout;

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView>

@property (readonly, nonatomic) SBHIconAccessoryCountedMapImageTuple *backgroundImageTuple;
@property (retain, nonatomic) SBHIconAccessoryCountedMapImageTuple *foregroundImageTuple;
@property (readonly, nonatomic) SBDarkeningImageView *backgroundView;
@property (readonly, nonatomic) UIImageView *foregroundView;
@property (nonatomic) long long badgeType;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImageCache;
+ (id)_checkoutImageForContinuityBadgeType:(long long)a0 highlighted:(BOOL)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (struct CGPoint { double x0; double x1; })layoutOffset;
- (double)badgeContentScale;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAccessoryBrightness:(double)a0;
- (void)_clearIcon;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (BOOL)displayingAccessory;
- (id)_checkoutBackgroundImageTuple;
- (struct CGSize { double x0; double x1; })badgeSize;

@end
