@class NSArray;

@interface PKPaymentRepopulateZonesRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSArray *cloudStoreZoneNames;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithCloudStoreZoneNames:(id)a0;

@end
