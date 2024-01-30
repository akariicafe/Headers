@interface GKMessageUtilities : NSObject

+ (id)messagesRecipientHandleForContact:(id)a0;
+ (void)linkMetadataWithPlayerRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 shareURL:(id)a1 completionHandler:(id /* block */)a2;
+ (id)playerWithPhoneNumberOrEmail:(id)a0 givenName:(id)a1;
+ (id)playerWithPhoneNumberOrEmail:(id)a0;
+ (id)predicateWithPhoneNumberOrEmail:(id)a0;

@end
