@class UISearchBar, NSLayoutConstraint;

@interface STSSearchBrowserHeaderView : UIView {
    NSLayoutConstraint *_searchBarHeight;
}

@property (readonly, nonatomic) UISearchBar *searchBar;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (id)init;
- (void).cxx_destruct;

@end
