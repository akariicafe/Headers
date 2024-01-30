@class MTMaterialView, NSString, CCUIContentModuleContainerViewController, CCSModulePresentationOptions, UIView, CCUIModuleInstance;
@protocol CCUIModuleAlertViewControllerDelegate;

@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate> {
    CCUIContentModuleContainerViewController *_moduleContainerViewController;
    CCUIModuleInstance *_moduleInstance;
    UIView *_contentView;
    MTMaterialView *_blurView;
}

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions;
@property (weak, nonatomic) id<CCUIModuleAlertViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *moduleAlertView;
@property (nonatomic) double backgroundViewWeighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentModuleContainerViewController:(id)a0 willOpenExpandedModule:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)contentModuleContainerViewController:(id)a0 didBeginInteractionWithModule:(id)a1;
- (void)contentModuleContainerViewController:(id)a0 willCloseExpandedModule:(id)a1;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)a0;
- (void)contentModuleContainerViewController:(id)a0 didCloseExpandedModule:(id)a1;
- (void)viewDidLoad;
- (BOOL)contentModuleContainerViewController:(id)a0 canBeginInteractionWithModule:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)contentModuleContainerViewController:(id)a0 willDismissViewController:(id)a1;
- (void)dismissModulePresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)contentModuleContainerViewController:(id)a0 didOpenExpandedModule:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)contentModuleContainerViewController:(id)a0 didFinishInteractionWithModule:(id)a1;
- (void)contentModuleContainerViewController:(id)a0 willPresentViewController:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })compactModeFrameForContentModuleContainerViewController:(id)a0;
- (void)loadView;
- (id)moduleAlertView;
- (double)backgroundViewWeighting;
- (id)initWithModuleIdentifier:(id)a0 presentationOptions:(id)a1;
- (void)setBackgroundViewWeighting:(double)a0;

@end
