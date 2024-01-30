@class CKModalTranscriptController, NSString, NSArray;
@protocol CKSMSComposeViewServiceControllerDelegate;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol> {
    BOOL _canEditRecipients;
    BOOL _shouldDisableEntryField;
    BOOL _supportsAttachments;
    BOOL _supportsMessageInspection;
    BOOL _forceMMS;
    BOOL _disableCameraAttachments;
    NSArray *_utiTypes;
    NSArray *_contentURLs;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSString *_shareSheetSessionID;
}

@property (copy, nonatomic) id /* block */ gameCenterPickerBlock;
@property (copy, nonatomic) id /* block */ entryViewCompletion;
@property (retain, nonatomic) CKModalTranscriptController *modalTranscriptController;
@property (nonatomic) BOOL canEditRecipients;
@property (nonatomic) BOOL shouldDisableEntryField;
@property (weak, nonatomic) id<CKSMSComposeViewServiceControllerDelegate> composeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void)_insertAttachmentWithURL:(id)a0 andDescription:(id)a1 preview:(id)a2 isFullyRealized:(BOOL)a3 appendedVideoURL:(id)a4 appendedBundleURL:(id)a5 completion:(id /* block */)a6;
- (void)setCanEditRecipients:(BOOL)a0;
- (void)insertFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2;
- (void)insertData:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2;
- (BOOL)_hostSandboxAllowsFileReadAtFileURL:(id)a0;
- (void)hideEntryViewContent:(BOOL)a0;
- (void)setCloudPhotoIDs:(id)a0;
- (void)_insertFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 preview:(id)a3 isFullyRealized:(BOOL)a4 appendedVideoURL:(id)a5 completion:(id /* block */)a6;
- (void)setPhotoIDs:(id)a0;
- (void)insertAttachmentWithURL:(id)a0 andDescription:(id)a1;
- (void)setContentURLs:(id)a0;
- (void)composeChatControllerDidCancelComposition:(id)a0;
- (void)_forceMMSIfNecessary;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2 chatGUID:(id)a3 groupName:(id)a4;
- (id)recipientsFromChatGUID:(id)a0 groupName:(id)a1 handles:(id)a2;
- (void)setShouldDisableEntryField:(BOOL)a0;
- (void)setPendingAddresses:(id)a0;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(BOOL)a0;
- (BOOL)supportsMessageInspection;
- (void)donateInteractionWithConversation:(id)a0;
- (void)setText:(id)a0 subject:(id)a1 addresses:(id)a2;
- (void)setUICustomizationData:(id)a0;
- (void)setShareSheetSessionID:(id)a0;
- (void)insertRemoteItemForSending:(id)a0;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)a0 completion:(id /* block */)a1;
- (void)showInsertedItemInEntryView;
- (void)insertFilename:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2 options:(id)a3;
- (void)forceCancelComposition;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)a0;
- (BOOL)composeChatControllerCanEditRecipients;
- (void)composeChatController:(id)a0 didSelectNewConversation:(id)a1;
- (BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)a0;
- (id)init;
- (BOOL)supportsAttachments;
- (void).cxx_destruct;
- (void)composeChatController:(id)a0 didLoadEntryViewContentWithCompletion:(id /* block */)a1;
- (void)composeChatController:(id)a0 shouldSendComposition:(id)a1 inConversation:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)setUTIs:(id)a0;
- (void)_willAppearInRemoteViewController;
- (void)forceMMS;
- (void)viewWillAppear:(BOOL)a0;
- (void)chatController:(id)a0 forwardComposition:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)prewarmCameraIfNecessaryForChatController:(id)a0;
- (void)setContentText:(id)a0;
- (void)setGameCenterPickedHandles:(id)a0 playerNames:(id)a1;
- (BOOL)_canShowWhileLocked;

@end
