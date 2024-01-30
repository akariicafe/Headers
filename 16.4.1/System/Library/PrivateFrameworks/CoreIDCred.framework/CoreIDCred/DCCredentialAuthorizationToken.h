@class NSData, NSString;

@interface DCCredentialAuthorizationToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *credentialAuthorizationToken;
@property (readonly) NSString *credentialPairingID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCredentialAuthorizationToken:(id)a0 pairingID:(id)a1;

@end
