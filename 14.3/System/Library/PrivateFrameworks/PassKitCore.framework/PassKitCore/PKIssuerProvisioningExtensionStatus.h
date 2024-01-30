@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL passEntriesAvailable;
@property (nonatomic) BOOL remotePassEntriesAvailable;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
