@class UIView, UIPointerInteraction, UIImage, PXStoryChromeButtonConfiguration, PXUpdater, UIImageView, NSString, NSObject, UIVisualEffectView, UIContextMenuInteraction, UILabel;
@protocol OS_os_log;

@interface PXStoryChromeButton : UIButton <UIPointerInteractionDelegate, PXGReusableView>

@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIImageView *systemImageView;
@property (readonly, nonatomic) UIImageView *badgeSystemImageView;
@property (readonly, nonatomic) UIImageView *assetImageView;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic) long long imageRequestID;
@property (nonatomic) BOOL isMenuOpen;
@property (nonatomic) BOOL isHovered;
@property (retain, nonatomic) UIContextMenuInteraction *customContextMenuInteraction;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (id)_createBadgeSystemImageView;
+ (id)_createSystemImageView;
+ (struct CGSize { double x0; double x1; })_sizeForAttributedLabel:(id)a0;

- (void)_configureBackgroundView:(id)a0;
- (void)layoutSubviews;
- (void)becomeReusable;
- (void)_updateBackgroundView;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateLabel;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setNeedsUpdate;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)_createLabel;
- (void)prepareForReuse;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_updateBackgroundViewCornerRadius;
- (id)accessibilityLabel;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_invalidateAppearance;
- (void)_invalidateAssetImage;
- (void)_updateAssetImage;
- (void)_px_invalidatePointerInteraction;
- (id)_createAssetImageView;
- (void)_updateSystemImageView;
- (void)_updateBadgeSytemImageView;
- (void)_updateAssetImageView;
- (void)_updateVisualEffectView;
- (void)_setEffectViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleImageResult:(id)a0 info:(id)a1 forDisplayAsset:(id)a2 requestID:(long long)a3 synchronous:(BOOL)a4;
- (void)_configureVisualEffectView:(id)a0;
- (void)_updateEffectViewCornerRadius;
- (id)_imageWithSystemName:(id)a0;
- (id)_badgeImageWithSystemName:(id)a0;
- (id)_imageWithSystemName:(id)a0 symbolConfiguration:(id)a1;
- (void)_configureActions;

@end
