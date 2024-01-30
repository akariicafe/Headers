@interface NGMMessageFormatter : NSObject

+ (id)formatOutgoingInnerMessageWithPayload:(id)a0 attributes:(id)a1 destinationIdentity:(id)a2 sendingIdentity:(id)a3 error:(id *)a4;
+ (id)formatOutgoingMessageWithEncryptedPayload:(id)a0 ephemeral:(id)a1 signature:(id)a2 keyValidator:(id)a3;

@end
