@class _UIBackdropView, NSString, NSArray, UIView, NSMutableArray, UIScrollView;

@interface SKUIModernChartsView : UIView <UIScrollViewDelegate> {
    _UIBackdropView *_backdropView;
    UIView *_headerView;
    NSMutableArray *_headerViews;
    BOOL _hideHeader;
    UIScrollView *_scrollView;
    NSArray *_viewControllers;
}

@property (readonly, nonatomic) _UIBackdropView *backdropView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateHeader;
- (void)_layoutHeadersWithColumnSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutViewControllersWithColumnSize:(struct CGSize { double x0; double x1; })a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)setColumnViewControllers:(id)a0;

@end
