@class PKAddPaymentPassRequestConfiguration;

@interface PKIssuerProvisioningExtensionPaymentPassEntry : PKIssuerProvisioningExtensionPassEntry <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addRequestConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 identifier:(id)a1 title:(id)a2 art:(struct CGImage { } *)a3;
- (id)initWithIdentifier:(id)a0 title:(id)a1 art:(struct CGImage { } *)a2 addRequestConfiguration:(id)a3;

@end
