@class UIFocusContainerGuide, UIVisualEffectView, UIView;

@interface _TVListTemplateView : UIView {
    UIVisualEffectView *_backdropView;
    UIVisualEffectView *_bgVisualEffectView;
    double _bgVisualEffectOffset;
    UIFocusContainerGuide *_previewFocusGuide;
    UIFocusContainerGuide *_overallFocusGuide;
}

@property (retain, nonatomic) UIView *bgImageView;
@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) UIView *listView;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic, getter=isBackdropEnabled) BOOL backdropEnabled;
@property (readonly, nonatomic) long long listAlignment;
@property (nonatomic) BOOL floatingBanner;
@property (nonatomic) BOOL shouldAdjustListForTabBar;
@property (nonatomic) BOOL shouldAdjustPreviewForTabBar;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredFocusEnvironments;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)adjustScrollForListView:(id)a0;
- (void)setOverlayBlurOffset:(double)a0;

@end
