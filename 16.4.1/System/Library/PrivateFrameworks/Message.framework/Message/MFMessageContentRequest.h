@class MFMailMessage, NSString, EDMessagePersistence, EDMailDropMetadataGenerator, EDListUnsubscribeHandler, EMMessageObjectID, EDMessageTransformer, EMContentRequestOptions;
@protocol EFScheduler, EMContentItemRequestDelegate;

@interface MFMessageContentRequest : NSObject {
    id<EFScheduler> _scheduler;
    EMMessageObjectID *_objectID;
    EDMessagePersistence *_messagePersistence;
    MFMailMessage *_legacyMessage;
    EDMessageTransformer *_messageTransformer;
    NSString *_clientIdentifier;
    EMContentRequestOptions *_options;
    EDMailDropMetadataGenerator *_mailDropAttachmentGenerator;
    EDListUnsubscribeHandler *_listUnsubscribeHandler;
    id<EMContentItemRequestDelegate> _delegate;
}

+ (id)metadataWithDictionary:(id)a0;
+ (id)onScheduler:(id)a0 requestContentForObjectID:(id)a1 messagePersistence:(id)a2 legacyMessage:(id)a3 messageTransformer:(id)a4 mailDropAttachmentGenerator:(id)a5 listUnsubscribeHandler:(id)a6 clientIdentifier:(id)a7 options:(id)a8 delegate:(id)a9 completionHandler:(id /* block */)a10;
+ (id)onScheduler:(id)a0 requestID:(unsigned long long)a1 requestContentForObjectID:(id)a2 messagePersistence:(id)a3 legacyMessage:(id)a4 messageTransformer:(id)a5 mailDropAttachmentGenerator:(id)a6 listUnsubscribeHandler:(id)a7 clientIdentifier:(id)a8 options:(id)a9 delegate:(id)a10 completionHandler:(id /* block */)a11;

- (void).cxx_destruct;
- (id)_attachmentContentItemsForMailDropNodes:(id)a0 withContext:(id)a1;
- (id)_attachmentForMailDropMetaData:(id)a0 context:(id)a1;
- (id)_contentItemForAttachment:(id)a0 manager:(id)a1 managed:(BOOL)a2;
- (id)_contentRepresentationForEvent:(id)a0 contentURL:(id)a1 relatedItems:(id)a2 existingRepresentation:(id)a3 invocable:(id)a4;
- (id)_contentRepresentationForLoadingEvent:(id)a0 existingRepresentation:(id)a1;
- (id)_dataHolderWithCancelationToken:(id)a0;
- (id)_generateRepresentationForLoadingContext:(id)a0 existingRepresentation:(id)a1 completion:(id /* block */)a2;
- (void)_includeCachedMetadataJSONIfNeededForRepresentation:(id)a0 message:(id)a1;
- (void)_includeHeadersIfNeededForRepresentation:(id)a0 message:(id)a1 options:(id)a2;
- (void)_includeSuggestionItemsIfNeededForRepresentation:(id)a0 message:(id)a1;
- (id)_maildropMetadataFromContext:(id)a0;
- (id)_messageForLegacyMessage:(id)a0;
- (id)_processContentLoadingContextEvent:(id)a0;
- (id)_requestContentForAttachment:(id)a0 manager:(id)a1 options:(id)a2 managed:(BOOL)a3 completion:(id /* block */)a4;
- (id)beginRequestWithCompletionHandler:(id /* block */)a0;
- (id)delegateWithErrorHandler:(id /* block */)a0;
- (id)requestHTMLRepresentationWithCompletionHandler:(id /* block */)a0;
- (id)requestRawRepresentationWithCompletionHandler:(id /* block */)a0;

@end
