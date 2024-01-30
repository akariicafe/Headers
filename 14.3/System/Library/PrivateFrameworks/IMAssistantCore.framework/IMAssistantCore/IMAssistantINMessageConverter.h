@interface IMAssistantINMessageConverter : NSObject

+ (id)expressiveSendIdFromMessageEffectType:(long long)a0;
+ (id)INMessageForOutgoingIMMessage:(id)a0 toChat:(id)a1 personProvider:(id)a2;
+ (id)messageEffectTypeToExpressiveSendIdDictionary;
+ (id)INMessageForSPIMessage:(id)a0 personProvider:(id)a1;
+ (id)INPersonsForSPIHandles:(id)a0 personProvider:(id)a1;
+ (id)__INSpeakableStringForMessage:(id)a0;
+ (long long)messageEffectTypeFromExpressiveSendId:(id)a0;
+ (id)__INMessageLinkMetadataForLPLinkMetadata:(id)a0;
+ (id)spiHandleForIMHandle:(id)a0 isMe:(BOOL)a1;
+ (id)__INSpeakableStringForChat:(id)a0;

@end
