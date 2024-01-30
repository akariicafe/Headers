@class WKWebView, UIView, _SFNavigationBar, _SFToolbar, _SFPinnableBanner, _SFCrashBanner, SFNanoDomainContainerView, _SFLinkPreviewHeader;
@protocol SFBrowserViewDelegate;

@interface _SFBrowserView : UIView

@property (retain, nonatomic) SFNanoDomainContainerView *nanoDomainContainerView;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) _SFToolbar *toolbar;
@property (retain, nonatomic) _SFNavigationBar *navigationBar;
@property (nonatomic) double bottomBarOffset;
@property (nonatomic) double topBarHeight;
@property (readonly, weak, nonatomic) WKWebView *currentWebView;
@property (nonatomic) unsigned long long navigationBarBehavior;
@property (retain, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (retain, nonatomic) UIView *statusBarBackgroundView;
@property (readonly, nonatomic) UIView *scrollToTopView;
@property (nonatomic) BOOL shouldUseScrollToTopView;
@property (retain, nonatomic) _SFCrashBanner *crashBanner;
@property (nonatomic) double crashBannerOffset;
@property (retain, nonatomic) _SFPinnableBanner *pinnableBanner;
@property (nonatomic) struct CGPoint { double x; double y; } pinnableBannerOffset;
@property (retain, nonatomic) _SFPinnableBanner *appBannerPendingFirstPaint;
@property (readonly, nonatomic) BOOL hasReceivedTouchEvents;
@property (retain, nonatomic) UIView *quickLookDocumentView;
@property (nonatomic) double minimalUITopOffset;
@property (weak, nonatomic) id<SFBrowserViewDelegate> delegate;
@property (nonatomic) double unscaledWebViewWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } obscuredInsets;
@property (retain, nonatomic) UIView *appInfoOverlay;
@property (readonly, nonatomic) BOOL isContentReadyForDisplay;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)previewScaleFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledWebViewBounds;
- (void)_scaleContentInset;
- (void)setContentReadyForDisplay;
- (void)updateDismissButtonStyle:(long long)a0;
- (void)addWebView:(id)a0;
- (void)updatePreviewHeaderWithURLString:(id)a0;

@end
