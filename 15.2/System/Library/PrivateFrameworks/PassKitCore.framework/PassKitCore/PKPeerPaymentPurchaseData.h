@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL requiresInteraction;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToPKPeerPaymentPurchaseData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
