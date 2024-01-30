@class NSString;

@interface STSCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *subIdentifier;
@property (readonly, nonatomic) unsigned char type;

+ (id)credentialWithType:(unsigned char)a0 identifier:(id)a1 subIdentifier:(id)a2;
+ (id)unifiedAccessCredentialWithAID:(id)a0 publicKeyIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 identifier:(id)a1 subIdentifier:(id)a2;

@end
