@class NSString, UIViewController;
@protocol _UISharingPublicController;

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost>

@property (weak, nonatomic) UIViewController<_UISharingPublicController> *publicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_dismissViewController;
- (void)_shareDidChange:(id)a0;
- (void)_shareWasMadePrivate;
- (void)_dismissViewControllerWithError:(id)a0;
- (void)_cloudSharingControllerDidChooseTransport:(id)a0;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)a0;
- (void)_performHeaderActionWithCompletion:(id /* block */)a0;
- (void)_requestSavedShareWithCompletion:(id /* block */)a0;
- (void)_dismissForActivityRepresentation:(id /* block */)a0;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)a0;
- (void)_requestContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)_dismissAndRepresentForActivity:(id /* block */)a0;
- (void)_tintColorDidChangeToColor:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
