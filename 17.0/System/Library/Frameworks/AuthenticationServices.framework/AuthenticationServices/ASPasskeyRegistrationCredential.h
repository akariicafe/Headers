@class NSArray, NSString, NSData;

@interface ASPasskeyRegistrationCredential : NSObject <ASAuthorizationCredential>

@property (class, readonly, nonatomic) NSArray *_defaultTransports;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) NSData *clientDataHash;
@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSData *attestationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithRelyingParty:(id)a0 clientDataHash:(id)a1 credentialID:(id)a2 attestationObject:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validateWithError:(id *)a0;
- (id)initWithRelyingParty:(id)a0 clientDataHash:(id)a1 credentialID:(id)a2 attestationObject:(id)a3;

@end
