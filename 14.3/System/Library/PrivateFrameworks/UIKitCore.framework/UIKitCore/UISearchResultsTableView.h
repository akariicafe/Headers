@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
    double _offsetForNoResultsMessage;
    UIView *_topShadowView;
}

@property (weak, nonatomic) UISearchDisplayController *controller;
@property (retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)_numberOfRowsDidChange;
- (void)_setOffsetForNoResultsMessage:(double)a0;
- (double)_offsetForNoResultsMessage;

@end
