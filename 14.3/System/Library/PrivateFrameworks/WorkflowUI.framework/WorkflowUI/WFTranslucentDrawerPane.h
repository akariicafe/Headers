@class UISearchBar, NSString, UIVisualEffectView, WFDrawerPaneContainer, UIView, WFDrawerGrabberView, UIViewController;
@protocol WFDrawerPaneHeaderView;

@interface WFTranslucentDrawerPane : UIViewController <WFDrawerPaneHeaderViewDelegate, WFDrawerPane>

@property (weak, nonatomic) UIView *shadowView;
@property (weak, nonatomic) WFDrawerGrabberView *grabberView;
@property (weak, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *backgroundContentView;
@property (nonatomic, getter=isCandidateForContentCapture) BOOL candidateForContentCapture;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL roundsTopCorners;
@property (nonatomic) BOOL usesVisualEffectView;
@property (copy, nonatomic) NSString *drawerGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) WFDrawerPaneContainer *container;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } grabberAreaBounds;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) double topCornerRadius;
@property (weak, nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithViewController:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)updateHeaderView;
- (id)wf_drawerController;
- (id)wf_drawerItem;
- (void)wf_setDrawerController:(id)a0;
- (void)wf_setDrawerItem:(id)a0;
- (void)willTransitionToVisibility:(unsigned long long)a0;
- (void)transitionContentForHeight:(double)a0;
- (void)didDismissHeaderView:(id)a0;
- (void)updatePaneProperties;
- (void)installChildViewController:(id)a0;

@end
