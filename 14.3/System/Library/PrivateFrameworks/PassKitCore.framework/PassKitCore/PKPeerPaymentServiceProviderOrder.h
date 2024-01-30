@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder

@property (copy, nonatomic) NSString *sourceAccount;
@property (copy, nonatomic) NSString *targetAccount;
@property (copy, nonatomic) NSString *dpanIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)serviceProviderData;
- (void)encodeWithCoder:(id)a0;

@end
