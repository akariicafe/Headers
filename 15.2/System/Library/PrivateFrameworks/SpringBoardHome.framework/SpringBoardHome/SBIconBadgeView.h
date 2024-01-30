@class UIColor, NSString, UIImageView, SBHIconAccessoryCountedMapImageTuple, SBDarkeningImageView, SBFParallaxSettings, UITapGestureRecognizer;
@protocol SBIconListLayout;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {
    UIImageView *_incomingTextView;
    BOOL _displayingAccessory;
    SBHIconAccessoryCountedMapImageTuple *_backgroundImageTuple;
    SBHIconAccessoryCountedMapImageTuple *_textImageTuple;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_textView;
}

@property (class, readonly, nonatomic) UIColor *badgeBackgroundColor;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;

+ (id)_createImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (id)backgroundImageCache;
+ (double)_textPadding;
+ (id)_checkoutImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_checkoutBackgroundImageTuple;
- (void)layoutSubviews;
- (void)_applyParallaxSettings;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (void)_resizeForTextImage:(id)a0;
- (struct CGSize { double x0; double x1; })badgeSize;
- (struct CGPoint { double x0; double x1; })layoutOffset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layOutTextImageView:(id)a0;
- (void)_crossfadeToTextImage:(id)a0 animator:(id)a1;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_zoomOutWithAnimator:(id)a0;
- (double)badgeContentScale;
- (void)_clearText;
- (void).cxx_destruct;
- (id)init;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)setAccessoryBrightness:(double)a0;
- (void)prepareForReuse;
- (void)_zoomInWithTextImage:(id)a0 animator:(id)a1;
- (id)font;
- (void)dealloc;
- (BOOL)displayingAccessory;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForTextImage:(id)a0;
- (void)_configureAnimatedForText:(id)a0 highlighted:(BOOL)a1 animator:(id)a2;

@end
