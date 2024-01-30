@class NSString;

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *updatedSince;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
