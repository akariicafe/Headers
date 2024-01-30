@class UIView, UIImage, ContinuousReadingItem, UIImageView, ContinuousReadingBannerView, SFBannerTheme, UILabel, WKWebView;

@interface ContinuousReadingPreviewView : UIView {
    SFBannerTheme *_bannerTheme;
    UIView *_headerHairline;
    UIImageView *_snapshotView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) ContinuousReadingBannerView *bannerView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem;
@property (retain, nonatomic) WKWebView *contentView;
@property (readonly, nonatomic) double rubberBandingHeight;
@property (readonly, nonatomic) double headerHeight;
@property (nonatomic, getter=isPrefetchingDisabled) BOOL prefetchingDisabled;
@property (readonly, nonatomic, getter=isPreviewingNextDocument) BOOL previewingNextDocument;
@property (readonly, nonatomic) BOOL canShowContentView;
@property (retain, nonatomic) UIImage *documentSnapshot;
@property (nonatomic) struct CGSize { double width; double height; } contentViewSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBannerTheme:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layOutContentView;
- (void)_layOutHeader;
- (id)initWithContinuousReadingItem:(id)a0 previewingNextDocument:(BOOL)a1;
- (void)replaceContentViewWithItsSnapshot;

@end
