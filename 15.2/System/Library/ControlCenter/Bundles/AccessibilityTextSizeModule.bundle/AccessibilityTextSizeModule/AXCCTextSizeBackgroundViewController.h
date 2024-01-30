@class AXCCTextSizeHelper, NSString, UILabel, NSMutableArray, AXCCExpandableButton;

@interface AXCCTextSizeBackgroundViewController : UIViewController <AXCCTextSizeDelegate, UIPointerInteractionDelegate>

@property (retain, nonatomic) UILabel *textSizeLabel;
@property (retain, nonatomic) UILabel *textPercentageLabel;
@property (retain, nonatomic) UILabel *defaultLabel;
@property (retain, nonatomic) NSMutableArray *switcherOptions;
@property (retain, nonatomic) AXCCExpandableButton *perAppModeSwitcher;
@property (retain, nonatomic) AXCCTextSizeHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateLabelFonts;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)moduleDidExpand;
- (id)_addLabelSubviewWithText:(id)a0;
- (void)_togglePerAppButton:(id)a0;
- (void)_contentSizeCategoryDidChangeInternally:(id)a0;
- (void)_updatePerAppControls;
- (id)_preferredCategoryWithPerAppSettings;
- (void)_updateDefaultLabelPercentageForContentSizeCategory:(id)a0;
- (void)_updateDefaultLabelVisibilityForContentSizeCategory:(id)a0;
- (void)_layoutPerAppControls;
- (void)perAppTextSizeToggled;

@end
