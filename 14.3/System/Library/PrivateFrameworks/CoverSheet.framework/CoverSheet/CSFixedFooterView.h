@class _UILegibilitySettings, CSPageControl, CSShakableView, SBUILegibilityLabel, SBUICallToActionLabel, UIView, SBFPagedScrollView;
@protocol SBUILegibility;

@interface CSFixedFooterView : CSCoverSheetViewBase {
    _UILegibilitySettings *_legibilitySettings;
}

@property (readonly, nonatomic) CSShakableView *callToActionShakeView;
@property (retain, nonatomic) SBUICallToActionLabel *callToActionLabel;
@property (retain, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel;
@property (nonatomic) double alternateCallToActionLabelOffset;
@property (retain, nonatomic) UIView<SBUILegibility> *statusTextView;
@property (readonly, nonatomic) CSPageControl *pageControl;
@property (weak, nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl;

- (void)updateForLegibilitySettings:(id)a0;
- (void)_addPageControl;
- (void).cxx_destruct;
- (id)presentationRegions;
- (void)_layoutStatusTextView;
- (void)_addShakeView;
- (void)layoutSubviews;
- (void)_updateViewsForLegibilitySettings;
- (void)updatePageControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutPageControl;
- (void)_layoutCallToActionView;

@end
