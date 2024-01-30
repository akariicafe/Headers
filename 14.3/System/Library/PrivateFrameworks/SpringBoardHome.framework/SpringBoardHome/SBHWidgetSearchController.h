@class UIView;
@protocol SBIconListLayoutProvider;

@interface SBHWidgetSearchController : UISearchController

@property (retain, nonatomic) UIView *searchBarBackgroundView;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) UIView *searchBarTextFieldBackgroundView;

- (void).cxx_destruct;
- (void)_setupSearchBar;
- (void)_setupTextField;
- (void)_setupTextFieldBackground;
- (void)_setupBarBackground;
- (id)initWithListLayoutProvider:(id)a0;
- (void)updateSearchBarBackgroundForScrollDistance:(double)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
