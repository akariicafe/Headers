@class MKVibrantView, NSArray, UIImageView, GEOQuickLink, NSLayoutConstraint, _MKUILabel, GEOAppStoreAppClip;
@protocol MKQuickLinkItemViewDelegate;

@interface MKQuickLinkItemView : UIView {
    _MKUILabel *_label;
    _MKUILabel *_appLabel;
    MKVibrantView *_vibrantView;
    UIImageView *_appImageView;
    NSArray *_constraints;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastToFirstBaseline;
    NSLayoutConstraint *_lastToBotomBaseline;
}

@property (weak, nonatomic) id<MKQuickLinkItemViewDelegate> delegate;
@property (retain, nonatomic) GEOQuickLink *quickLink;
@property (retain, nonatomic) GEOAppStoreAppClip *appClip;
@property (nonatomic) BOOL touched;

+ (id)labelFont;
+ (id)widthDictionary;
+ (double)widthBrandItem;
+ (double)minWidthForString:(id)a0 forSize:(id)a1;
+ (id)appLabelFont;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)updateColor;
- (void)_createConstraints;
- (void)didMoveToWindow;
- (void)preferredContentSizeChanged:(id)a0;
- (void)_loadAppClip;
- (void)_loadFallBackApp;
- (void)infoCardThemeChanged;
- (void)_loadAppClipArtwork:(id)a0 bundleID:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_contentSizeDidChange;
- (id)initWithQuickLink:(id)a0;
- (void)_loadOfficialApp;
- (void)_loadAppArtwork:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
