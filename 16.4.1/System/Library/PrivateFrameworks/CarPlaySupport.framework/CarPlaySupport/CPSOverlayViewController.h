@class _UINonHostingVisibilityPropagationView, UIFocusGuide, NSString;
@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable>

@property (readonly, nonatomic) UIFocusGuide *rightHandDriveGuide;
@property (nonatomic) int pid;
@property (retain, nonatomic) _UINonHostingVisibilityPropagationView *visibilityView;
@property (weak, nonatomic) id<UIFocusItem> preferredFocusItem;
@property (nonatomic) BOOL usePreferredItemOnNextUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)templates;
- (void)invalidate;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)restoresFocusAfterTransition;
- (void)popTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)popToRootTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)popToTemplate:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)topTemplate;
- (id)presentedTemplateViewController;
- (id)_firstFocusProvidingForViewController:(id)a0;
- (void)_invalidateVisibilityView;
- (BOOL)_needsVisibilityView;
- (void)_resetRightHandDriveGuide;
- (void)_updateVisibilityView;
- (BOOL)_useRightHandDriveFocusGuide;
- (unsigned long long)indexOfTemplate:(id)a0;
- (void)presentActionSheetTemplate:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentTemplateViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)pushTemplateViewController:(id)a0 animated:(BOOL)a1 presentationStyle:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)shouldHideNavigationBarForViewController:(id)a0;
- (void)updateVisibilityForPid:(int)a0;
- (id)viewControllerForTemplate:(id)a0;

@end
