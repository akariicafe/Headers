@class UISearchBar, NSLayoutConstraint;

@interface STSSearchBrowserHeaderView : UIView {
    NSLayoutConstraint *_searchBarHeight;
}

@property (readonly, nonatomic) UISearchBar *searchBar;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
