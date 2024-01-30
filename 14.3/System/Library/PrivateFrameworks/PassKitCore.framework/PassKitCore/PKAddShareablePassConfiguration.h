@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration

@property (nonatomic) BOOL noncesFetched;
@property (readonly, nonatomic) unsigned long long primaryAction;
@property (readonly, nonatomic) NSArray *credentialsMetadata;
@property (readonly, nonatomic) NSString *provisioningPolicyIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryAction:(unsigned long long)a0 credentialsMetadata:(id)a1 provisioningPolicyIdentifier:(id)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)a0;
- (id)description;
- (BOOL)hasRequiredDataForProvisioning;
- (void)encodeWithCoder:(id)a0;

@end
