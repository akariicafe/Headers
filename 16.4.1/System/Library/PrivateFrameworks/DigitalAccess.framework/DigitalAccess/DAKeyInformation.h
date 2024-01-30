@class DAHydraKeyInformation, NSString, DAAlishaKeyInformation, DAHomeKeyInformation;

@interface DAKeyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;
@property (readonly, nonatomic) NSString *publicKeyIdentifier;
@property (readonly, nonatomic) DAAlishaKeyInformation *alishaKeyInformation;
@property (readonly, nonatomic) DAHydraKeyInformation *hydraKeyInformation;
@property (readonly, nonatomic) DAHomeKeyInformation *homeKeyInformation;

+ (id)alishaKeyWithPublicKeyIdentifier:(id)a0 alishaKeyInformation:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
