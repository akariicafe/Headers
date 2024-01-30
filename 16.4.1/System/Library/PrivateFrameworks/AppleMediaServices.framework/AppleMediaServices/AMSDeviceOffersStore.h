@class NSArray, NSDictionary, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (retain, nonatomic) NSArray *cachedRegistrationGroups;
@property (readonly, nonatomic) NSArray *companionSerialNumbers;
@property (retain, nonatomic) NSDictionary *deviceOfferEligibility;
@property (retain, nonatomic) NSArray *deviceOffers;
@property (retain, nonatomic) NSArray *deviceRegistrationBlacklist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serialsBySubtractingAGroups:(id)a0 fromBGroups:(id)a1;
+ (id)serialsFromGroups:(id)a0;
+ (id)splitGroups:(id)a0 byItem:(id)a1;

- (void)_dbSetNullableValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)removeCachedRegistrationItem:(id)a0;

@end
