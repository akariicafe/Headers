@interface OTOperationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timeoutWaitForCKAccount;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL discretionaryNetwork;
@property (nonatomic) BOOL useCachedAccountStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
