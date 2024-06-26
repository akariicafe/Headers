@class EMMessage, NSString, NSArray, MFMailMessage, MFAttachmentCompositionContext, MFComposeWebView, MFAttachmentComposeManager, NSMutableArray, MFMessageLoadingContext, MFAttachmentManager, EMMessageList;
@protocol EFScheduler, _MFMailCompositionContextDelegate;

@interface _MFMailCompositionContext : NSObject <EMCollectionChangeObserver, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients> {
    NSString *_messageBody;
    MFAttachmentComposeManager *_attachmentManager;
    NSMutableArray *_deferredAttachments;
    BOOL _registeredForDraw;
    EMMessageList *_messageList;
}

@property MFComposeWebView *composeWebView;
@property (retain, nonatomic) id<EFScheduler> observationScheduler;
@property (nonatomic) BOOL usingDefaultAccount;
@property (copy, nonatomic) NSString *sendingAddress;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *toRecipients;
@property (copy, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSString *attachmentToMarkupContentID;
@property (nonatomic) BOOL loadRest;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic) BOOL includeAttachmentsWhenAdding;
@property (nonatomic) BOOL showKeyboardImmediately;
@property (nonatomic) BOOL showContentImmediately;
@property (nonatomic) BOOL prefersFirstLineSelection;
@property (nonatomic) unsigned long long caretPosition;
@property (retain, nonatomic) id originalContent;
@property (retain, nonatomic) MFMessageLoadingContext *loadingContext;
@property (nonatomic) BOOL originatingFromAttachmentMarkup;
@property (copy, nonatomic) NSArray *contentVariations;
@property (nonatomic) unsigned long long defaultContentVariationIndex;
@property (copy, nonatomic) NSString *contentVariationAttachmentCID;
@property (readonly, nonatomic) int composeType;
@property (readonly, nonatomic) NSString *autosaveIdentifier;
@property (readonly, nonatomic) MFMailMessage *legacyMessage;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (nonatomic) int sourceAccountManagement;
@property (readonly, nonatomic) EMMessage *originalMessage;
@property (readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (readonly, nonatomic) MFAttachmentManager *attachmentManager;
@property (readonly, nonatomic) NSString *contextID;
@property (weak, nonatomic) id<_MFMailCompositionContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *UTITypes;
@property (copy, nonatomic) NSArray *photoIDs;
@property (copy, nonatomic) NSArray *cloudPhotoIDs;
@property (copy, nonatomic) NSArray *contentText;
@property (copy, nonatomic) NSArray *contentURLs;
@property (copy, nonatomic) NSString *shareSheetSessionID;

+ (id)log;
+ (id)processMessageBody:(id)a0 asHTML:(BOOL)a1;

- (void)removeAttachment:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)switchToReplyAllWithDelegate:(id)a0;
- (void)switchToReplyWithDelegate:(id)a0;
- (void)setMessageBody:(id)a0 isHTML:(BOOL)a1;
- (id)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (id)attachments;
- (id)initWithComposeType:(int)a0 RFC822Data:(id)a1;
- (void)dealloc;
- (id)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3;
- (id)messageBody;
- (id)initWithURL:(id)a0;
- (id)initWithComposeType:(int)a0;
- (id)initWithURL:(id)a0 composeType:(int)a1 originalMessage:(id)a2 legacyMessage:(id)a3;
- (id)initWithComposeType:(int)a0 originalMessage:(id)a1 legacyMessage:(id)a2;
- (id)initWithURL:(id)a0 composeType:(int)a1 originalMessage:(id)a2 legacyMessage:(id)a3 isEML:(BOOL)a4;
- (id)initWithComposeType:(int)a0 originalMessage:(id)a1 legacyMessage:(id)a2 isEML:(BOOL)a3;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)a0;
- (id)initReplyToMessage:(id)a0 legacyMessage:(id)a1;
- (id)initReplyAllToMessage:(id)a0 legacyMessage:(id)a1;
- (id)initForwardOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initReplyToMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initReplyAllToMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initForwardOfMessage:(id)a0 legacyMessage:(id)a1 isEML:(BOOL)a2;
- (id)initDraftRestoreOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initSendAgainDraftOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initOutboxRestoreOfMessage:(id)a0 legacyMessage:(id)a1;
- (id)initWithHandoffActivityPayload:(id)a0;
- (id)addAttachmentDataItemProvider:(id)a0 mimeType:(id)a1 filename:(id)a2 contentID:(id)a3;
- (void)recordPasteboardAttachmentsForURLs:(id)a0;
- (void)recordUndoAttachmentsForURLs:(id)a0;
- (void)insertAttachmentWithURL:(id)a0;
- (void)insertAttachmentWithData:(id)a0 fileName:(id)a1 mimeType:(id)a2 contentID:(id)a3;
- (BOOL)hasDuetDonationContext;
- (void)insertDeferredAttachmentsIntoComposeWebView:(id)a0;

@end
