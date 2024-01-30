@interface DCCredentialOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long deleteIncompleteCredentialAfterDays;
@property long long deleteInactiveKeysAfterDays;
@property unsigned long long readerAuthenticationPolicy;
@property unsigned long long presentmentAuthPolicy;
@property unsigned long long payloadProtectionPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
