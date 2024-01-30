@class SPUISearchViewController, NSString, SPUINavigationBar;
@protocol SPUINavigationControllerDelegate;

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate>

@property (retain) SPUISearchViewController *searchViewController;
@property (readonly, nonatomic) SPUINavigationBar *navigationBar;
@property (readonly) double contentHeight;
@property (nonatomic) long long navigationMode;
@property (nonatomic) BOOL shouldShowKeyboardInputBars;
@property (weak, nonatomic) id<SPUINavigationControllerDelegate> sizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfNavigationBar;
- (double)contentHeightIncludingCardViewController;
- (id)init;
- (void)cardViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (long long)preferredUserInterfaceStyle;
- (void)setContentHeight:(double)a0 animated:(BOOL)a1;
- (id)initWithSearchViewController:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)applyCardHeightAnimated:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)contentHeightIncludingSearchView;
- (void)didInvalidateSizeAnimated:(BOOL)a0;

@end
