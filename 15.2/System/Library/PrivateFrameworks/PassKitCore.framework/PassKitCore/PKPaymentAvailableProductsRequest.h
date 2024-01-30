@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *preferredLanguage;
@property (nonatomic) long long context;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPreferredLanguage:(id)a0;

@end
