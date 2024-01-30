@class NSString;

@interface PKPeerPaymentBankLookupRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *query;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithCountryCode:(id)a0 query:(id)a1;

@end
