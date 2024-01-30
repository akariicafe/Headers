@class NSString, _UIBackdropView, UIView;
@protocol PKHorizontalScrollingFooterViewComparator;

@interface PKDashboardViewControllerFooterContainer : UIView <PKHorizontalScrollingFooterViewProtocol> {
    long long _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
}

@property (retain, nonatomic) UIView<PKHorizontalScrollingFooterViewComparator> *currentFooter;
@property (retain, nonatomic) UIView<PKHorizontalScrollingFooterViewComparator> *nextFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setTransitionProgress:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)preferredBackdropStyle;

@end
