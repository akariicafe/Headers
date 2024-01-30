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

- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)a0;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(id)a0;
- (void)_dismissAndRepresentForActivity:(id /* block */)a0;
- (void)_dismissForActivityRepresentation:(id /* block */)a0;
- (void)_dismissViewController;
- (void)_dismissViewControllerWithError:(id)a0;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)a0;
- (void)_performHeaderActionWithCompletion:(id /* block */)a0;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)a0;
- (void)_requestContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_requestSavedShareWithCompletion:(id /* block */)a0;
- (void)_shareDidChange:(id)a0;
- (void)_shareWasMadePrivate;
- (void)_tintColorDidChangeToColor:(id)a0;
- (void)_updateTraitCollectionForPopoverStatus;

@end
