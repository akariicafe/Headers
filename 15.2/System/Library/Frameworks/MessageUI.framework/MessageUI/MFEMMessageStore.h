@class EMMessage, NSString, MFMailboxUid, NSData, EMContentRepresentation, NSMutableDictionary, MFMailMessage;

@interface MFEMMessageStore : MFMessageStore <EMContentItemRequestDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) EMMessage *message;
@property (retain, nonatomic) MFMailboxUid *mailboxUid;
@property (retain, nonatomic) NSString *mimeBoundary;
@property (retain, nonatomic) NSData *bodyHTMLData;
@property (retain, nonatomic) Class messageClass;
@property (retain, nonatomic) EMContentRepresentation *bodyRepresentation;
@property (nonatomic) BOOL skipAttachmentDownload;
@property (retain, nonatomic) NSMutableDictionary *contentIDsToRepresentations;
@property (retain, nonatomic) NSMutableDictionary *contentIDsToContentItems;
@property (readonly, nonatomic) MFMailMessage *legacyMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headersForDraftRestoration;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;
- (id)headerDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (void)contentObjectID:(id)a0 generateHTMLSnippetsForRelatedContentItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentObjectID:(id)a0 placeholderHTMLForEmptyContentWithCompletionHandler:(id /* block */)a1;
- (void)contentObjectID:(id)a0 generateHTMLSnippetsForMailDropContentItems:(id)a1 completionHandler:(id /* block */)a2;
- (id)bodyForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 updateFlags:(BOOL)a2;
- (id)initWithEMMessage:(id)a0 messageClass:(Class)a1 mailboxUid:(id)a2 skipAttachmentDownload:(BOOL)a3;
- (id)_requestMessageContentRepresentationFetchIfNotAvailable:(BOOL)a0;
- (id)_markupStringForDisplayForContentItem:(id)a0;
- (BOOL)_isDisplayableImageContentItem:(id)a0;

@end
