@interface SKIMessagesInvocation : NSObject

+ (id)beginSiriRequestForApp:(id)a0;
+ (id)composeNewMessageRequestInApp:(id)a0;
+ (id)composeNewMessageRequestToContact:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 inApp:(id)a3;
+ (id)composeReplyRequestToConversationIdentifier:(id)a0 inApp:(id)a1;
+ (id)readMessagesRequestFromConversationIdentifier:(id)a0 inApp:(id)a1;
+ (id)readMessagesRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1;
+ (id)makeParameterMetadataForIntent:(id)a0;
+ (id)announceMessagesRequestFromAnnounceDirectInvocationPayload:(id)a0;
+ (id)announceMessagesRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1 synchronousBurstIndex:(id)a2;
+ (id)makeParameterMetadataForParameterNamed:(id)a0;
+ (id)sendMessageFromInteractiveSnippetWithUpdatedContent:(id)a0 withContext:(id)a1;
+ (id)updateMessageContentFromInteractiveSnippet:(id)a0 withContext:(id)a1;

@end
