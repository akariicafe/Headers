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

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)setCanEditRecipients:(BOOL)a0;
- (id)initWithNavigationController:(id)a0;
- (BOOL)insertData:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)setCloudPhotoIDs:(id)a0;
- (void)setPhotoIDs:(id)a0;
- (BOOL)insertAttachmentWithURL:(id)a0 andDescription:(id)a1;
- (void)setContentURLs:(id)a0;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2 chatGUID:(id)a3 groupName:(id)a4;
- (void)setShouldDisableEntryField:(BOOL)a0;
- (void)setPendingAddresses:(id)a0;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(BOOL)a0;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;
- (void)smsComposeControllerSendStartedWithText:(id)a0;
- (void)smsComposeControllerCancelled;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2;
- (void)setUICustomizationData:(id)a0;
- (void)setShareSheetSessionID:(id)a0;
- (void)showInsertedItemInEntryView;
- (BOOL)insertFilename:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2 options:(id)a3;
- (void)forceCancelComposition;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_addRemoteVCIfNeeded;
- (BOOL)canInsertMessage;
- (BOOL)insertMessage:(id)a0;
- (BOOL)insertRichLinkWithURL:(id)a0 andData:(id)a1;
- (void)insertItemForSendingAndCalculateEntryViewFrame:(id)a0 withAlternateFilename:(id)a1 completion:(id /* block */)a2;
- (void)setUTIs:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)forceMMS;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setContentText:(id)a0;
- (void)setGameCenterPickedHandles:(id)a0 playerNames:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
