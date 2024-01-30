@protocol AKCredentialRequestProtocol, AKCredential;

@interface AKAuthorization : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> authorizedRequest;
@property (retain, nonatomic) id<AKCredential> credential;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
