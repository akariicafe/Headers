@class SBDarkeningImageView, NSString, UIImageView, SBFParallaxSettings, SBHIconAccessoryCountedMapImageTuple;
@protocol SBIconListLayout;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {
    NSString *_text;
    UIImageView *_incomingTextView;
    BOOL _displayingAccessory;
    SBHIconAccessoryCountedMapImageTuple *_backgroundImageTuple;
    SBHIconAccessoryCountedMapImageTuple *_textImageTuple;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;

+ (id)_checkoutImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (id)backgroundImageCache;
+ (id)_createImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (double)_textPadding;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)_resizeForTextImage:(id)a0;
- (id)font;
- (void).cxx_destruct;
- (void)_applyParallaxSettings;
- (void)_configureAnimatedForText:(id)a0 highlighted:(BOOL)a1 animator:(id)a2;
- (void)dealloc;
- (void)_zoomInWithTextImage:(id)a0 animator:(id)a1;
- (void)prepareForReuse;
- (struct CGPoint { double x0; double x1; })layoutOffset;
- (double)badgeContentScale;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForTextImage:(id)a0;
- (void)_crossfadeToTextImage:(id)a0 animator:(id)a1;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAccessoryBrightness:(double)a0;
- (void)_clearText;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (BOOL)displayingAccessory;
- (id)_checkoutBackgroundImageTuple;
- (struct CGSize { double x0; double x1; })badgeSize;
- (void)_zoomOutWithAnimator:(id)a0;
- (void)_layOutTextImageView:(id)a0;

@end
