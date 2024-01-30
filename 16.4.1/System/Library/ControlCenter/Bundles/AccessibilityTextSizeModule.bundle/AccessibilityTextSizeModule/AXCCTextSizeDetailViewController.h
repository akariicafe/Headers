@class AXCCTextSizeHelper, NSString, NSArray, CCUISteppedSliderView, UISelectionFeedbackGenerator;

@interface AXCCTextSizeDetailViewController : UIViewController <AXCCTextSizeDelegate> {
    NSArray *_contentSizeCategories;
    unsigned long long _selectedCategoryIndex;
    BOOL _selectedCategoryIndexNeedsCommit;
    UISelectionFeedbackGenerator *_selectionFeedback;
}

@property (readonly, nonatomic) CCUISteppedSliderView *slider;
@property (retain, nonatomic) AXCCTextSizeHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sizeCategoryDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_sliderValueDidChange:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupSlider;
- (void)_commitTextSizeIfNeeded;
- (void)_refreshTextSizes;
- (void)_sliderValueDidCommit:(id)a0;
- (void)endTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)expandedContentHeight;
- (double)expandedContentWidth;
- (void)perAppTextSizeToggled;

@end
