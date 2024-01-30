@class NSString;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *referrerIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_murlRequestWithURL:(id)a0;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
