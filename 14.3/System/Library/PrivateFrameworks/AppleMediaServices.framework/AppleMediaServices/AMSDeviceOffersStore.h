@class NSDictionary, NSArray, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (retain, nonatomic) NSDictionary *deviceOfferEligibility;
@property (retain, nonatomic) NSArray *deviceOffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
