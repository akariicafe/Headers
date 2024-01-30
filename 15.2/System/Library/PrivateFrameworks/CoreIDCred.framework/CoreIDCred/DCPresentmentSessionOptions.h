@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long sessionEncryptionMode;
@property unsigned long long readerAuthenticationPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0 readerAuthenticationPolicy:(unsigned long long)a1;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0;

@end
