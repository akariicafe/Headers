@class NSString, UIActivityIndicatorView, UILabel, UISearchBar;
@protocol PKPaymentSetupHeroTitleViewDelegate;

@interface PKPaymentSetupHeroTitleView : UIView <UISearchBarDelegate> {
    UILabel *_titleLabel;
    UILabel *_subtitleLbel;
    UISearchBar *_searchBar;
    UIActivityIndicatorView *_activityIndicator;
}

@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double minHeight;
@property (nonatomic) BOOL showSearchBar;
@property (nonatomic) BOOL showSpinner;
@property (weak, nonatomic) id<PKPaymentSetupHeroTitleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)_contentSizeCategoryDidChange;
- (void)setTitle:(id)a0 subtitle:(id)a1;
- (void)_setLabelFonts;
- (void)setSearchBarDefaultText:(id)a0;
- (struct { double x0; double x1; })_calculateMinAndMaxHeightForWidth:(double)a0;

@end
