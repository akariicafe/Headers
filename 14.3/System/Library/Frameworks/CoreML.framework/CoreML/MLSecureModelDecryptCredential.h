@interface MLSecureModelDecryptCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long cryptoKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
