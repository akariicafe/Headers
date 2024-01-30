@class NSString, AKAuthorization, NSData;

@interface ASCAppleIDCredential : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorization *authorization;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSData *identityToken;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthorization:(id)a0;
- (id)initWithUser:(id)a0 identityToken:(id)a1 state:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
