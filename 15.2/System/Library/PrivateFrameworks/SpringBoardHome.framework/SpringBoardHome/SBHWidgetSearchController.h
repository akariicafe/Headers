@class NSMapTable, UIView;
@protocol SBIconListLayoutProvider;

@interface SBHWidgetSearchController : UISearchController {
    NSMapTable *_scrollProgressByClient;
}

@property (retain, nonatomic) UIView *searchBarBackgroundView;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) UIView *searchBarTextFieldBackgroundView;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)_textFieldFont;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithListLayoutProvider:(id)a0;
- (void)dealloc;
- (void)updateSearchBarBackgroundForScrollDistance:(double)a0 forClient:(id)a1;
- (void)_setupSearchBar;
- (void)_setupTextField;
- (void)_setupTextFieldBackground;
- (void)_setupBarBackground;
- (void)updateSearchBarContentInsetsWithWidth:(double)a0;
- (double)grabberTopSpacing;

@end
