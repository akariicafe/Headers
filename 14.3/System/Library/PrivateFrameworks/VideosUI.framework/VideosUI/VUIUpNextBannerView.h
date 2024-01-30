@class UIFocusGuide, UIVisualEffectView, NSString, UIView;

@interface VUIUpNextBannerView : UIView <TVRowHosting> {
    struct { BOOL respondsToRowMetricsForExpectedWidth; BOOL respondsToShouldBindRowsTogether; BOOL respondsToShowcaseRowMetricsForExpectedWidth; } _shelfViewFlags;
    BOOL _isHostWatchNow;
}

@property (retain, nonatomic) UIView *shelfView;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (retain, nonatomic) UIFocusGuide *focusGuide;
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 addBlurBackground:(BOOL)a1 isHostWatchNow:(BOOL)a2;
- (id)rowMetricsForExpectedWidth:(double)a0 firstItemRowIndex:(long long *)a1;

@end
