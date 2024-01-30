@class NSString, SFCredentialIdentity;

@interface ASCPasswordLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) SFCredentialIdentity *externalCredentialIdentity;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 site:(id)a1 externalCredentialIdentity:(id)a2;

@end
