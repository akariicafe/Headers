@class _UIBackdropView, UIView;
@protocol PKSpendingSummaryFooter;

@interface PKSpendingSummaryFooterContainer : UIView {
    long long _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
}

@property (retain, nonatomic) UIView<PKSpendingSummaryFooter> *currentFooter;
@property (retain, nonatomic) UIView<PKSpendingSummaryFooter> *nextFooter;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setTransitionProgress:(double)a0;
- (void)layoutSubviews;
- (long long)preferredBackdropStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
