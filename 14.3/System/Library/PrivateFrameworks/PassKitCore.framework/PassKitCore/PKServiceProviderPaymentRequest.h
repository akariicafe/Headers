@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder;

+ (id)availableNetworks;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceProviderOrder:(id)a0;
- (id)merchantIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
