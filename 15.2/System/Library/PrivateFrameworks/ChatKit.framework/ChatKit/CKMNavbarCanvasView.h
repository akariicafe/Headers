@class UIButton, UISearchBar;

@interface CKMNavbarCanvasView : UIView

@property (readonly, nonatomic) UISearchBar *searchBarView;
@property (readonly, nonatomic) UIButton *composeButtonView;
@property (nonatomic) BOOL shouldLayoutForCollapsedWidth;

- (void)layoutSubviews;
- (void)setComposeButtonView:(id)a0;
- (void)_layoutForDisplayBelowToolbar;
- (void)setSearchBarView:(id)a0;
- (void)_layoutForDisplayInNavbar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearAllItemViews;

@end
