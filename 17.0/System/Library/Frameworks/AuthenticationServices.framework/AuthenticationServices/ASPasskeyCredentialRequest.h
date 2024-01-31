@class NSData, NSString, NSArray;
@protocol ASCredentialIdentity;

@interface ASPasskeyCredentialRequest : NSObject <ASCredentialRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *clientDataHash;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (readonly, nonatomic) NSArray *supportedAlgorithms;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<ASCredentialIdentity> credentialIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLoginChoice:(id)a0;
- (id)initWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3;

@end
