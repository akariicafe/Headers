@interface PKSharingMessageExtensionMessageBuilder : NSObject

+ (void)messageFromConfiguration:(id)a0 completionHandler:(id /* block */)a1;
+ (void)messageFromInvitation:(id)a0 analyticsSessionToken:(id)a1 completionHandler:(id /* block */)a2;
+ (void)messageFromInvitation:(id)a0 completionHandler:(id /* block */)a1;
+ (void)messageFromSharingRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)messageURLFromSharingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
