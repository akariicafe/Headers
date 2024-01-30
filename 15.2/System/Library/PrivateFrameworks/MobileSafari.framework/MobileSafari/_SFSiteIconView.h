@class UIColor, _SFHairlineBorderView, UIImageView, UIImage, UIView, UILabel, WebBookmark;
@protocol _SFSiteIconViewUpdateObserver;

@interface _SFSiteIconView : UIView {
    UIImageView *_imageView;
    UIView *_backgroundView;
    UILabel *_monogramLabel;
    long long _state;
    id _touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    BOOL _modernImageIsTransparent;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<_SFSiteIconViewUpdateObserver> updateObserver;
@property (nonatomic) BOOL shouldUseModernStyling;
@property (nonatomic) BOOL shouldShowDropShadow;

- (void)layoutSubviews;
- (void)_setState:(long long)a0;
- (void)_updateMonogramLabelSizeAndFont;
- (void)_setSiteIcon:(id)a0 withBackgroundColor:(id)a1;
- (id)_tintedFolderImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_glyphConfiguration;
- (void)_cancelTouchIconRequest;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (void)_setMonogramWithString:(id)a0 backgroundColor:(id)a1;
- (void)_setContinuousCornerRadius:(double)a0;
- (long long)_inferredIconSize;
- (void)_updateGlyphConfiguration;
- (void)dealloc;
- (void)_displayDefaultFolderIcon;
- (void)_setGlyph:(id)a0 withBackgroundColor:(id)a1;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)a0;
- (double)_monogramFontSize;
- (void)updateBookmarkData;
- (id)_effectiveBackgroundColor;
- (void)_setImage:(id)a0 withBackgroundColor:(id)a1;

@end
