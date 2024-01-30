@class UINavigationController, NSString, CKSMSComposeRemoteViewController, _UIAsyncInvocation, CKSMSComposeQueuingRemoteViewControllerProxy;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    BOOL _safeToAdd;
    BOOL _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

@property (nonatomic) BOOL firstItemWasInserted;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController;
@property (retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)acceptsMIMEType:(id)a0;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;
+ (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)setUTIs:(id)a0;
- (BOOL)insertMessage:(id)a0;
- (void)forceMMS;
- (BOOL)canInsertMessage;
- (void)_addRemoteVCIfNeeded;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)insertRichLinkWithURL:(id)a0 andData:(id)a1;
- (void)insertItemForSendingAndCalculateEntryViewFrame:(id)a0 withAlternateFilename:(id)a1 completion:(id /* block */)a2;
- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCanEditRecipients:(BOOL)a0;
- (BOOL)insertData:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2;
- (void)smsComposeControllerDataInserted;
- (void)setPhotoIDs:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)dealloc;
- (BOOL)insertAttachmentWithURL:(id)a0 andDescription:(id)a1;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2 chatGUID:(id)a3 groupName:(id)a4;
- (void)setContentURLs:(id)a0;
- (void)setContentText:(id)a0;
- (void)setShouldDisableEntryField:(BOOL)a0;
- (void)disableCameraAttachments;
- (void)setPendingAddresses:(id)a0;
- (void)setTextEntryContentsVisible:(BOOL)a0;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;
- (void)smsComposeControllerSendStartedWithText:(id)a0;
- (void)smsComposeControllerCancelled;
- (void)setShouldIgnoreEmailsWhenSending:(BOOL)a0;
- (void)setNavBarTitle:(id)a0;
- (void)setGameCenterPickedHandles:(id)a0 playerNames:(id)a1;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2 shouldHideClearPluginButton:(BOOL)a3;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2 shouldHideClearPluginButton:(BOOL)a3 chatGUID:(id)a4;
- (void)displaySubscriptionSwitchIfAvailable:(BOOL)a0;
- (void)setUICustomizationData:(id)a0;
- (void)setCloudPhotoIDs:(id)a0;
- (void)setShareSheetSessionID:(id)a0;
- (void)showInsertedItemInEntryView;
- (BOOL)insertFilename:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2 options:(id)a3;
- (void)forceCancelComposition;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)a0;

@end
