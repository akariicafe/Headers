@class SPUISearchViewController, NSString, SPUINavigationBar;
@protocol SPUINavigationControllerDelegate, SPUIUnifiedFieldNavigationDelegate;

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate>

@property (retain) SPUISearchViewController *searchViewController;
@property (readonly, nonatomic) SPUINavigationBar *navigationBar;
@property (readonly) double contentHeight;
@property (nonatomic) long long navigationMode;
@property (weak, nonatomic) id<SPUINavigationControllerDelegate> sizingDelegate;
@property (weak, nonatomic) id<SPUIUnifiedFieldNavigationDelegate> unifiedFieldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)updateSearchFieldForViewController:(id)a0;
- (void)tapToRadarPressed;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (double)heightOfNavigationBar;
- (BOOL)_canShowWhileLocked;
- (void)didInvalidateSizeAnimated:(BOOL)a0;
- (void)cardViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)applyCardHeightAnimated:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (id)generateFooterViewIfNeeded;
- (void)setContentHeight:(double)a0 animated:(BOOL)a1;
- (double)contentHeightIncludingSearchView;
- (id)init;
- (long long)preferredUserInterfaceStyle;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (double)contentHeightIncludingCardViewController;
- (id)initWithSearchViewController:(id)a0;
- (void)updateFooterViewForViewController:(id)a0;
- (void)updateFooterViewsIfNecessary;
- (void).cxx_destruct;

@end
