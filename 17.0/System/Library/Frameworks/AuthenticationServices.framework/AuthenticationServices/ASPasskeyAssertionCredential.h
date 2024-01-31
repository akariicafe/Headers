@class NSData, NSString;

@interface ASPasskeyAssertionCredential : NSObject <ASAuthorizationCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, copy, nonatomic) NSString *relyingParty;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSData *clientDataHash;
@property (readonly, copy, nonatomic) NSData *authenticatorData;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithUserHandle:(id)a0 relyingParty:(id)a1 signature:(id)a2 clientDataHash:(id)a3 authenticatorData:(id)a4 credentialID:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validateWithError:(id *)a0;
- (id)initWithUserHandle:(id)a0 relyingParty:(id)a1 signature:(id)a2 clientDataHash:(id)a3 authenticatorData:(id)a4 credentialID:(id)a5;

@end
