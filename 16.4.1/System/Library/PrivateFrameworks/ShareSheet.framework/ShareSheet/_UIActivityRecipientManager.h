@interface _UIActivityRecipientManager : NSObject

+ (void)requestMessagesRecipientInfoForSessionID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)createRemoteDataProxyWithErrorHandler:(id /* block */)a0;
+ (void)requestMailRecipientsForSessionID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestRecipientsForSessionID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestRecipientsV2ForSessionID:(id)a0 completionHandler:(id /* block */)a1;

@end
