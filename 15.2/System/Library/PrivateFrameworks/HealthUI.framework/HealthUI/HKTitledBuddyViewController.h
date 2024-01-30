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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateForCurrentSizeCategory;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)headerView;
- (id)titleString;
- (void)reloadViews;
- (id)titleImage;
- (id)bodyString;
- (BOOL)shouldCustomizeNavigationBar;
- (long long)bodyTextAlignment;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (id)linkButtonTitle;
- (void)linkButtonTapped:(id)a0;
- (id)_createHeaderView;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)a0;
- (id)subsequentViews;
- (void)_createAnchoredButtons;
- (BOOL)shouldHideNavigationBar;
- (void)_anchoredButtonTapped:(id)a0;

@end
