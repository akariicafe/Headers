@class _UIResilientRemoteViewContainerViewController, NSArray, DOCAppearance, DOCConfiguration, NSURL, NSString, UIViewController;
@protocol DOCRemoteAppearanceInterface, DOCServiceTargetSelectionBrowserViewControllerProxy, DOCTargetSelectionBrowserViewControllerDelegate;

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCKeyCommandDismissible, DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceCustomization, DOCRemoteViewControllerDelegate>

@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewController;
@property (retain, nonatomic) UIViewController<DOCRemoteAppearanceInterface> *localViewController;
@property (retain, nonatomic) id<DOCServiceTargetSelectionBrowserViewControllerProxy> serviceProxy;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) DOCAppearance *lastAppearance;
@property (retain, nonatomic) DOCConfiguration *configuration;
@property (weak, nonatomic) id<DOCTargetSelectionBrowserViewControllerDelegate> targetSelectionDelegate;
@property (copy, nonatomic) NSURL *directoryURLToReveal;
@property (readonly) DOCAppearance *effectiveAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)remoteInterface;
- (void)_cancelButtonPressed:(id)a0;
- (void)_updateNavigationBar;
- (void)cancelPresentation;
- (void)dismissViewController;
- (void)setURLs:(id)a0;
- (void)viewDidLoad;
- (void)effectiveAppearanceDidChange:(id)a0;
- (void)filesExportedAtURLs:(id)a0;
- (void)remoteViewController:(id)a0 didTerminateViewServiceWithError:(id)a1;
- (BOOL)canDismissWithKeyCommand;
- (void)dismissWithKeyCommand:(id)a0;
- (id)initForPickingFolderWithConfiguration:(id)a0;
- (id)initForExportingWithConfiguration:(id)a0;
- (void)_dismissWithBlock:(id /* block */)a0;
- (void)notifyDelegateOfCancellation;
- (id)initWithConfiguration:(id)a0 items:(id)a1;
- (id)initWithConfiguration:(id)a0 urls:(id)a1;

@end
