@class UIView, NSArray, SBFFeatherBlurView, UILabel, UINavigationBarAppearance, UINavigationItem;

@interface SBHFeatherBlurNavigationBar : UINavigationBar {
    UINavigationBarAppearance *_barAppearance;
    UILabel *_featherBlurTitleLabel;
    UINavigationItem *_configuredForItem;
    NSArray *_maskLayers;
    double _largeTextHeight;
    UIView *_capturedLargeTextLabelContainerView;
    UIView *_capturedTinyTextLabelContainerView;
}

@property (retain, nonatomic) SBFFeatherBlurView *featherBlurBackgroundView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientMaskFrame;
@property (readonly, nonatomic) double sb_minimumNavbarHeight;
@property (readonly, nonatomic) double sb_maximumNavbarHeight;
@property (nonatomic) BOOL allowsAnimatedUpdating;

- (long long)barPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabel;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (double)_topMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateCompactNavBarFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateFeatherBlurBackgroundViewFrame;
- (id)_capturedLargeTextLabelContainerView;
- (id)_capturedTinyTextLabelContainerView;
- (void)_updateHeights;

@end
