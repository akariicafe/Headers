@class UILabel;

@interface AXCCTextSizeBackgroundViewController : UIViewController

@property (retain, nonatomic) UILabel *textSizeLabel;
@property (retain, nonatomic) UILabel *defaultLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateLabelFonts;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_contentSizeCategoryDidChangeInternally:(id)a0;
- (void)_updateDefaultLabelVisibilityForContentSizeCategory:(id)a0;

@end
