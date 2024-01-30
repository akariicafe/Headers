@class NSString;
@protocol IMAssistantMessageSendHandlerDelegate;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {
    NSString *_conversationIdentifierResolvedDuringRecipientResolution;
}

@property (retain, nonatomic) id<IMAssistantMessageSendHandlerDelegate> messageSendHandlerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveContentForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveRecipientsForSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveOutgoingMessageTypeForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSpeakableGroupNameForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)canSendLocationMessageWithLocationManager:(id)a0 withError:(long long *)a1;
- (id)sendMessageWithText:(id)a0 currentLocation:(BOOL)a1 audioMessageAttachment:(id)a2 expressiveSendStyleID:(id)a3 idsIdentifier:(id)a4 executionContext:(long long)a5 toChat:(id)a6;
- (BOOL)updateSenderIdentityForNewlyCreatedChat:(id)a0;
- (void)resolveRecipients:(id)a0 forIntent:(id)a1 completion:(id /* block */)a2;
- (id)resolveMessageContentWithString:(id)a0;
- (BOOL)isMemberOfChat:(id)a0;
- (id)resolvedRecipientsFromChat:(id)a0;
- (BOOL)recipientHandleResolutionResultsAllowedByScreentime:(id)a0 error:(id *)a1;
- (id)recipientsResolutionFailureResultWithResult:(id)a0 forRecipient:(id)a1 amongRecipients:(id)a2;
- (id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)a0 withMatchingHandlesByRecipient:(id)a1 fromChats:(id)a2;
- (id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)a0;
- (id)contactResolutionResultForContacts:(id)a0 matchingRecipient:(id)a1;
- (id)handleResolutionResultForHandles:(id)a0 resolvedContactForAlternatives:(id)a1 recipient:(id)a2;
- (BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)a0 nextChat:(id)a1;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)a0;
- (id)contactsWithDuplicateNamesAmongContacts:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 intentIdentifier:(id)a2;

@end
