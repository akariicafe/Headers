@class CKContainerSetupInfo, _UIResilientRemoteViewContainerViewController, CKShare, UIActivityViewController, _UIRemoteViewController, NSDictionary, NSObject, _UIShareInvitationRemoteViewController, UIViewController, NSString, CKSystemSharingUIObserver, CKContainer, UIImage;
@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining> {
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    BOOL _shareNeedsDeletion;
}

@property (retain, nonatomic, getter=_activityViewController, setter=_setActivityViewController:) UIActivityViewController *activityViewController;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails;
@property (copy, nonatomic) id /* block */ preparationHandler;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController;
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself;
@property (retain, nonatomic, getter=_sectionTitleForAuxiliarySwitches, setter=_setSectionTitleForAuxiliarySwitches:) NSString *sectionTitleForAuxiliarySwitches;
@property (retain, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle;
@property (nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) BOOL primaryAuxiliarySwitchState;
@property (retain, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle;
@property (nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) BOOL secondaryAuxiliarySwitchState;
@property (retain, nonatomic, getter=_rootFolderTitle, setter=_setRootFolderTitle:) NSString *rootFolderTitle;
@property (retain, nonatomic, getter=_folderSubitemName, setter=_setFolderSubitemName:) NSString *folderSubitemName;
@property (retain, nonatomic, getter=_headerPrimaryImage, setter=_setHeaderPrimaryImage:) UIImage *headerPrimaryImage;
@property (retain, nonatomic, getter=_headerSecondaryImage, setter=_setHeaderSecondaryImage:) UIImage *headerSecondaryImage;
@property (retain, nonatomic, getter=_systemSharingUIObserver, setter=_setSystemSharingUIObserver:) CKSystemSharingUIObserver *systemSharingUIObserver;
@property (weak, nonatomic) id<_UICloudSharingControllerDelegate_Internal> internalDelegate;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> delegate;
@property (nonatomic) unsigned long long availablePermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (id)allowedSharingOptionsFromPermissions:(unsigned long long)a0;

- (void)_didDismiss;
- (long long)modalPresentationStyle;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addResizingChildViewController:(id)a0;
- (void)__viewControllerWillBePresented:(BOOL)a0;
- (void)_callPreparationHandler:(id /* block */)a0;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)a0;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(id)a0;
- (id)_customPresentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_deleteShareAfterDismissalWithoutSave:(id /* block */)a0;
- (void)_dismissForActivityRepresentation:(id /* block */)a0;
- (void)_dismissViewControllerWithError:(id)a0;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)a0;
- (void)_performHeaderActionWithCompletion:(id /* block */)a0;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)a0;
- (void)_requestSavedShareWithCompletion:(id /* block */)a0;
- (BOOL)_requiresCustomPresentationController;
- (void)_sendDidStopSharingDelegate;
- (void)_shareDidChange:(id)a0;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (id)activityItemSource;
- (id)createActivityLinkMetadata;
- (id)excludedActivityTypes;
- (id)initWithPreparationHandler:(id /* block */)a0;
- (id)initWithShare:(id)a0 container:(id)a1;
- (id)initWithShare:(id)a0 preparationHandler:(id /* block */)a1;

@end
