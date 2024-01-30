@class NSString;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *referrerIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithURL:(id)a0;
- (id)initWithCoder:(id)a0;

@end
