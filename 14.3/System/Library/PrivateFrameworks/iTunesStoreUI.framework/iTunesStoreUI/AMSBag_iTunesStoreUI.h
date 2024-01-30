@class AMSBagValue, NSString;

@interface AMSBag_iTunesStoreUI : NSObject <AMSDeviceOfferBagContract>

@property (readonly, nonatomic) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly, nonatomic) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
