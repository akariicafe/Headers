@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *region;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithRegion:(id)a0;

@end
