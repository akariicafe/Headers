@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *explicitUserPermission;
@property (copy, nonatomic) NSString *socialNetwork;

+ (id)getSocialCredential;
+ (id)getSocialCredentialWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
