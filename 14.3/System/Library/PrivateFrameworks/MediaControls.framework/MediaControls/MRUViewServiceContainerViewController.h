@class MPMediaControlsConfiguration, NSString, UIView, MRUViewServiceRoutingViewController, MTMaterialView;

@interface MRUViewServiceContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController>

@property (retain, nonatomic) MRUViewServiceRoutingViewController *routingViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) MTMaterialView *materialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissalBlock;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewServiceRoutingViewControllerDidChangeSize:(id)a0;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)a0;
- (BOOL)shouldPresentUsingPopover;
- (void)updateMaterialForPresenting:(BOOL)a0;
- (void)transitionToVisible:(BOOL)a0 animated:(BOOL)a1;

@end
