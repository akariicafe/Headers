@class CCUISteppedSliderView, NSArray, UISelectionFeedbackGenerator;

@interface AXCCTextSizeDetailViewController : UIViewController {
    NSArray *_contentSizeCategories;
    unsigned long long _selectedCategoryIndex;
    BOOL _selectedCategoryIndexNeedsCommit;
    UISelectionFeedbackGenerator *_selectionFeedback;
}

@property (readonly, nonatomic) CCUISteppedSliderView *slider;

- (void)_sliderValueDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)sizeCategoryDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)expandedContentWidth;
- (double)expandedContentHeight;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_sliderValueDidCommit:(id)a0;
- (void)_refreshTextSizes;
- (void)_commitTextSizeIfNeeded;
- (void)endTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
