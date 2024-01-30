@class NSString, NSURL, _UIResilientRemoteViewContainerViewController, UIImage, _UIShareInvitationRemoteViewController, UIViewController, UIActivityViewController, _UIRemoteViewController;
@protocol _UIDocumentSharingControllerDelegate_Private;

@interface UIDocumentSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController>

@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController;
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself;
@property (retain, nonatomic) UIActivityViewController *activityViewController;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *rootFolderURL;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic, getter=_thumbnail, setter=_setThumbnail:) UIImage *thumbnail;
@property (copy, nonatomic, getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:) NSString *auxiliaryActionTitle;
@property (copy, nonatomic, getter=_mailTemplate, setter=_setMailTemplate:) NSString *mailTemplate;
@property (copy, nonatomic, getter=_messageTemplate, setter=_setMessageTemplate:) NSString *messageTemplate;
@property (copy, nonatomic, getter=_mailSubject, setter=_setMailSubject:) NSString *mailSubject;
@property (nonatomic, getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:) BOOL collaborationUIEnabled;
@property (nonatomic, getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:) BOOL showOnlyAddPeople;
@property (nonatomic, getter=_showRootFolder, setter=_setShowRootFolder:) BOOL showRootFolder;
@property (copy, nonatomic, getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:) NSString *initialHeaderSubtitle;
@property (copy, nonatomic, getter=_headerSubtitle, setter=_setHeaderSubtitle:) NSString *headerSubtitle;
@property (copy, nonatomic, getter=_headerActionTitle, setter=_setHeaderActionTitle:) NSString *headerActionTitle;
@property (copy, nonatomic, getter=_appName, setter=_setAppName:) NSString *appName;
@property (weak, nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) id<_UIDocumentSharingControllerDelegate_Private> _privateDelegate;
@property (nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) BOOL legacyAppearance;
@property (weak, nonatomic) id delegate;
@property (weak, nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) id<_UIDocumentSharingControllerDelegate_Private> _privateDelegate;
@property (nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) BOOL legacyAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)_didDismiss;
- (id)initWithFileURL:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_addResizingChildViewController:(id)a0;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)a0;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)a0;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(id)a0;
- (id)_customPresentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_dismissForActivityRepresentation:(id /* block */)a0;
- (void)_dismissViewControllerWithError:(id)a0;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)a0;
- (void)_performHeaderActionWithCompletion:(id /* block */)a0;
- (void)_presentationControllerDidDismiss:(id)a0;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)a0;
- (void)_requestSavedShareWithCompletion:(id /* block */)a0;
- (BOOL)_requiresCustomPresentationController;
- (void)_setMailSubject:(id)a0 template:(id)a1;
- (void)_shareDidChange:(id)a0;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (void)_updatePresentationStyleForLegacyAppearance;

@end
