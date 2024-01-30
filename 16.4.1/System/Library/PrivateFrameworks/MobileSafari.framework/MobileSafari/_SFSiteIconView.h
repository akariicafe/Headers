@class NSString, UIImage, UIVisualEffect, WebBookmark, UIImageView, UIAction, _SFHairlineBorderView, UIVisualEffectView, UILabel, UIColor;
@protocol _SFSiteIconViewUpdateObserver;

@interface _SFSiteIconView : UIView {
    UIImageView *_imageView;
    UIVisualEffectView *_backgroundView;
    UILabel *_monogramLabel;
    long long _state;
    id _touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIVisualEffect *_preferredBackgroundEffect;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    BOOL _imageIsTransparent;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (copy, nonatomic) UIAction *action;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<_SFSiteIconViewUpdateObserver> updateObserver;
@property (nonatomic) BOOL allowsDropShadow;
@property (copy, nonatomic) NSString *visualEffectGroupName;

- (void)_setState:(long long)a0;
- (void)_setMonogramWithString:(id)a0 backgroundColor:(id)a1;
- (void)_cancelTouchIconRequest;
- (void)setAction:(id)a0 backgroundEffect:(id)a1;
- (id)_glyphConfiguration;
- (void)_setSiteIcon:(id)a0 withBackgroundColor:(id)a1;
- (void)_updateMonogramLabelSizeAndFont;
- (BOOL)usesVibrantAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setGlyph:(id)a0 withBackgroundEffect:(id)a1;
- (long long)_inferredIconSize;
- (void)_displayDefaultFolderIcon;
- (void)_setImage:(id)a0 withBackgroundColor:(id)a1;
- (double)_monogramFontSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (id)_effectiveBackgroundColor;
- (void)updateBookmarkData;
- (id)_tintedFolderImage;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_setGlyph:(id)a0 withBackgroundColor:(id)a1;
- (void)_updateGlyphConfiguration;

@end
