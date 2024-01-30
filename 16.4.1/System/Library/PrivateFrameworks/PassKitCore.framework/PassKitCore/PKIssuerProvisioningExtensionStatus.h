@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL passEntriesAvailable;
@property (nonatomic) BOOL remotePassEntriesAvailable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;

@end
