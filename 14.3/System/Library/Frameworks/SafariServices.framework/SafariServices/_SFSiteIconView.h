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

- (void)_updateMonogramLabelSizeAndFont;
- (void)_setMonogramWithString:(id)a0 backgroundColor:(id)a1;
- (void)_setImage:(id)a0 withBackgroundColor:(id)a1;
- (void)_setState:(long long)a0;
- (id)_effectiveBackgroundColor;
- (void).cxx_destruct;
- (void)updateBookmarkData;
- (void)dealloc;
- (id)_glyphConfiguration;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)a0;
- (void)_displayDefaultFolderIcon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (void)_cancelTouchIconRequest;
- (id)_tintedFolderImage;
- (void)_setGlyph:(id)a0 withBackgroundColor:(id)a1;
- (void)layoutSubviews;
- (void)_setSiteIcon:(id)a0 withBackgroundColor:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_monogramFontSize;
- (long long)_inferredIconSize;
- (void)_updateGlyphConfiguration;

@end
