@interface SKIMessagesInvocation : NSObject

+ (id)beginSiriRequestForApp:(id)a0;
+ (id)composeNewMessageRequestToContact:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 inApp:(id)a3;
+ (id)composeNewMessageRequestInApp:(id)a0;
+ (id)readMessagesRequestFromConversationIdentifier:(id)a0 inApp:(id)a1;
+ (id)readMessagesRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1;
+ (id)composeReplyRequestToConversationIdentifier:(id)a0 inApp:(id)a1;
+ (id)makeParameterMetadataForIntent:(id)a0;
+ (id)makeParameterMetadataForParameterNamed:(id)a0;
+ (id)announceMessagesRequestFromNotificationIdentifier:(id)a0 fromApp:(id)a1;

@end
