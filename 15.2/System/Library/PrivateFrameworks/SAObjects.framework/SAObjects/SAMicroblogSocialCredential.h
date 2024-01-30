@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *personalizationPermission;
@property (copy, nonatomic) NSString *socialNetwork;
@property (copy, nonatomic) NSString *tokenSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)socialCredential;
+ (id)socialCredentialWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
