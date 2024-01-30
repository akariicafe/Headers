@class UIColor, NSString, UIImageView, SBHIconAccessoryCountedMapImageTuple, SBDarkeningImageView, SBFParallaxSettings, UITapGestureRecognizer;
@protocol SBIconListLayout;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {
    UIImageView *_incomingTextView;
    BOOL _displayingAccessory;
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

+ (double)_textPadding;
+ (id)_createImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (id)_checkoutImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;

- (void)setAccessoryBrightness:(double)a0;
- (id)font;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (void)_applyParallaxSettings;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_crossfadeToTextImage:(id)a0 animator:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForTextImage:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)layoutSubviews;
- (void)_zoomInWithTextImage:(id)a0 animator:(id)a1;
- (void)_clearText;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)_zoomOutWithAnimator:(id)a0;
- (void)_configureAnimatedForText:(id)a0 highlighted:(BOOL)a1 animator:(id)a2;
- (BOOL)displayingAccessory;
- (struct CGPoint { double x0; double x1; })layoutOffset;
- (struct CGSize { double x0; double x1; })badgeSize;
- (void).cxx_destruct;
- (double)badgeContentScale;
- (void)_resizeForTextImage:(id)a0;
- (void)_layOutTextImageView:(id)a0;

@end
