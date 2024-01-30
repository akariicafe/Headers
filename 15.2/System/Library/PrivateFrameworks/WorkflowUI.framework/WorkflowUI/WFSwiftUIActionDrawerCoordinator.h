@class WFEditorDrawerViewController, WFActionDrawerResultsController, WFDrawerController, NSString, UIViewController;
@protocol WFSwiftUIActionDrawerCoordinatorDelegate;

@interface WFSwiftUIActionDrawerCoordinator : NSObject <WFActionDrawerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UIViewController *presentedPopover;
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController;
@property (weak, nonatomic) id<WFSwiftUIActionDrawerCoordinatorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) WFEditorDrawerViewController *drawerViewController;
@property (readonly, nonatomic) UIViewController *inspectorPaneContainerViewController;
@property (readonly, nonatomic) UIViewController *visibleInspectorPaneContentViewController;
@property (readonly, nonatomic) WFDrawerController *drawerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)dealloc;
- (void)appendAction:(id)a0;
- (void)collapseDrawer;
- (void)expandDrawer;
- (void)presentDrawerViewController:(id)a0 inPopover:(BOOL)a1 withSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithResultsController:(id)a0;
- (void)subscribeForTextEditingNotifications;
- (void)unsubscribeFromTextEditingNotifications;
- (void)responderDidBeginEditing:(id)a0;
- (id)newDrawerViewControllerWithStyle:(unsigned long long)a0;
- (void)configureAsBottomSheetInParentViewController:(id)a0 belowSubview:(id)a1;
- (void)configureAsNavigationStackInParentViewController:(id)a0;
- (void)setInspectorPaneViewController:(id)a0;

@end
