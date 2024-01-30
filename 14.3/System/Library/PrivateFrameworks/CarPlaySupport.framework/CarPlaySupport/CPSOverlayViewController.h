@class NSString, UIFocusGuide;
@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable>

@property (readonly, nonatomic) UIFocusGuide *rightHandDriveGuide;
@property (weak, nonatomic) id<UIFocusItem> preferredFocusItem;
@property (nonatomic) BOOL usePreferredItemOnNextUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (BOOL)restoresFocusAfterTransition;
- (id)templates;
- (void)invalidate;
- (void)viewDidLoad;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)popToTemplate:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)popTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)popToRootTemplateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)topTemplate;
- (unsigned long long)indexOfTemplate:(id)a0;
- (id)viewControllerForTemplate:(id)a0;
- (void)_resetRightHandDriveGuide;
- (BOOL)_useRightHandDriveFocusGuide;
- (id)_firstFocusProvidingForViewController:(id)a0;
- (void)pushTemplateViewController:(id)a0 animated:(BOOL)a1 presentationStyle:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)presentTemplateViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentActionSheetTemplate:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)presentedTemplateViewController;

@end
