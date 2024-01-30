@class NSString;

@interface PKPaymentProductsActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *productIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
