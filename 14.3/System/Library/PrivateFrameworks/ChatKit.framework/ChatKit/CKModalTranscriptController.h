@class CKChatEagerUploadController, NSMutableArray;

@interface CKModalTranscriptController : CKShareSheetChatController {
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
}

@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController;
@property (retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks;
@property (nonatomic) BOOL mimeType;
@property (nonatomic) BOOL forceMMS;

- (void)setCanEditRecipients:(BOOL)a0;
- (id)initWithNavigationController:(id)a0;
- (void)insertData:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2;
- (void)insertFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 fullyRealizedPreview:(id)a3 rawPreview:(id)a4 appendedVideoURL:(id)a5 completion:(id /* block */)a6;
- (void)hideEntryViewContent:(BOOL)a0;
- (void)insertRichLinkWithURL:(id)a0 data:(id)a1;
- (void)insertMessage:(id)a0 appProxy:(id)a1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)a0;
- (void)setShouldDisableEntryField:(BOOL)a0;
- (void)setPendingAddresses:(id)a0;
- (void)disableCameraAttachments;
- (void)setTextEntryContentsVisible:(BOOL)a0;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)shouldDismissAfterSend;
- (void)sendComposition:(id)a0;
- (BOOL)_deviceIsLocked;
- (id)proposedParticipantHandles;
- (BOOL)_insertMediaObject:(id)a0;
- (void)_insertMediaObjectAndReturnFrame:(id)a0 completion:(id /* block */)a1;
- (double)_offsetForScreenWidth:(double)a0 containerWidth:(double)a1 windowOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_setEntryViewVisible:(BOOL)a0;
- (void)_conversationListDidFinishLoading:(id)a0;
- (BOOL)_shouldAllowCameraAttachments;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseExistingConversations;
- (void)_setConversationDeferredSetup;
- (double)_maxEntryViewHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)setComposition:(id)a0;
- (BOOL)getContainerWidth:(double *)a0 offset:(double *)a1;

@end
