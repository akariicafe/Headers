@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentAppearance;
- (id)_contentsTintColor;
- (id)_contentsCompositingFilter;
- (BOOL)_ignoreRemoveAllAnimations;
- (void)traitCollectionDidChange:(id)a0;
- (id)trailingView;

@end
