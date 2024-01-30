@class NSString;

@interface ASCredentialRequestSecurityKeyStringUtilities : NSObject

@property (class, readonly, nonatomic) NSString *activateSecurityKeyAgainMessageText;

+ (id)messageWithPresentationContext:(id)a0;
+ (id)_multipleAllowedSecurityKeysMessageTextWithPresentationContext:(id)a0;
+ (id)_basicAssertionMessageTextWithPresentationContext:(id)a0;
+ (id)_registerSecurityKeyMessageTextWithPresentationContext:(id)a0;
+ (id)titleWithPresentationContext:(id)a0;

@end
