@interface CRKIDSLocalSimulationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldForceAccountsInactive;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
