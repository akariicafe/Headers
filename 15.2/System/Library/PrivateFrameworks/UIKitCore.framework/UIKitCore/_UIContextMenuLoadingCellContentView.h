@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingCellContentView : _UIContextMenuCellContentView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;

- (BOOL)_ignoreRemoveAllAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_contentsTintColor;
- (void)_updateContentAppearance;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_contentsCompositingFilter;
- (id)trailingView;

@end
