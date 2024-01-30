@interface CNUIUserActionCacheKeyGenerator : NSObject

+ (id)os_log;
+ (id)descriptionOfActionType:(id)a0;
+ (id)fingerprintOfEmailAddresses:(id)a0;
+ (id)fingerprintOfInstantMessageAddresses:(id)a0;
+ (id)fingerprintOfPhoneNumbers:(id)a0;
+ (id)fingerprintOfPostalAddresses:(id)a0;
+ (id)fingerprintOfSocialProfiles:(id)a0;
+ (id)handlesForActionType:(id)a0 contact:(id)a1;
+ (id)keyForContact:(id)a0 actionType:(id)a1;
+ (unsigned long long)propertiesForActionType:(id)a0;

@end
