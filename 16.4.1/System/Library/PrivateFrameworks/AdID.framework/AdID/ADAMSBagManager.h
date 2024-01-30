@class NSString, AMSBagKeySet;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createBagForSubProfile;

- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)a0;
- (BOOL)authenticateAccountThroughAMSOperation:(id)a0;
- (BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (long long)retrieveLatestPersonalizedAdsConsentVersionFromAMSBag;

@end
