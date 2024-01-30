@interface IMService : NSObject

+ (unsigned long long)myStatus;
+ (id)notificationCenter;
+ (id)allServicesNonBlocking;
+ (id)myIdleTime;
+ (id)smsService;
+ (id)callService;
+ (id)iMessageService;
+ (id)allServices;
+ (id)serviceWithName:(id)a0;
+ (id)facetimeService;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1;
+ (id)aimService;
+ (id)subnetService;
+ (id)jabberService;

- (void)login;
- (id)localizedShortName;
- (id)canonicalFormOfID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedName;
- (BOOL)initialSyncPerformed;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)myScreenNames;
- (id)infoForScreenName:(id)a0;
- (id)name;
- (void)logout;
- (unsigned long long)status;
- (BOOL)isEnabled;
- (id)peopleWithScreenName:(id)a0;
- (id)screenNamesForPerson:(id)a0;
- (id)infoForPerson:(id)a0;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;

@end
