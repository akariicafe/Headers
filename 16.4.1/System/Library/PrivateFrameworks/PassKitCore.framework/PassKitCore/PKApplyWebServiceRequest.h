@class NSString, NSDictionary;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *referrerIdentifier;
@property (retain, nonatomic) NSDictionary *experimentDetails;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_createMutableBody;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithURL:(id)a0;

@end
