@interface IMService : NSObject

+ (id)notificationCenter;
+ (id)serviceWithName:(id)a0;
+ (id)myIdleTime;
+ (id)allServicesNonBlocking;
+ (id)smsService;
+ (id)allServices;
+ (id)iMessageService;
+ (unsigned long long)myStatus;
+ (id)callService;
+ (id)facetimeService;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1;
+ (id)aimService;
+ (id)subnetService;
+ (id)jabberService;

- (id)canonicalFormOfID:(id)a0;
- (id)localizedShortName;
- (void)logout;
- (id)localizedName;
- (id)infoForScreenName:(id)a0;
- (void)login;
- (unsigned long long)status;
- (BOOL)isEnabled;
- (BOOL)initialSyncPerformed;
- (id)infoForPreferredScreenNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)myScreenNames;
- (id)name;
- (id)infoForAllScreenNames;
- (id)peopleWithScreenName:(id)a0;
- (id)screenNamesForPerson:(id)a0;
- (id)infoForPerson:(id)a0;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;

@end
