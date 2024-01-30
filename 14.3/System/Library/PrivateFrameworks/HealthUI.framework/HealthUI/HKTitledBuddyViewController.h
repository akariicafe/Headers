@class UIStackView, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIVisualEffectView, HKTitledLogoBuddyHeaderView;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
}

@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)embedView:(id)a0 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void)_updateForCurrentSizeCategory;
- (id)init;
- (void).cxx_destruct;
- (id)headerView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)bodyString;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)shouldCustomizeNavigationBar;
- (long long)bodyTextAlignment;
- (id)bottomAnchoredButtons;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;
- (void)buttonAtIndexTapped:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleImage;
- (void)viewDidLoad;
- (id)titleString;
- (id)linkButtonTitle;
- (void)linkButtonTapped:(id)a0;
- (id)_createHeaderView;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)a0;
- (id)subsequentViews;
- (void)_createAnchoredButtons;
- (BOOL)shouldHideNavigationBar;
- (void)_anchoredButtonTapped:(id)a0;
- (void)reloadViews;

@end
