@interface IMService : NSObject

+ (id)serviceWithName:(id)a0;
+ (id)myIdleTime;
+ (id)allServices;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1 forHandleType:(unsigned long long)a2;
+ (id)notificationCenter;
+ (id)subnetService;
+ (id)callService;
+ (id)iMessageService;
+ (void)forgetStatusImageAppearance;
+ (unsigned long long)myStatus;
+ (id)jabberService;
+ (id)aimService;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (id)smsService;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)facetimeService;
+ (id)allServicesNonBlocking;

- (id)localizedShortName;
- (id)localizedName;
- (id)infoForAllScreenNames;
- (BOOL)isEnabled;
- (id)canonicalFormOfID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)myScreenNames;
- (BOOL)initialSyncPerformed;
- (void)logout;
- (id)infoForScreenName:(id)a0;
- (unsigned long long)status;
- (id)name;
- (id)infoForPreferredScreenNames;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)a0;
- (void)login;
- (id)peopleWithScreenName:(id)a0;
- (id)screenNamesForPerson:(id)a0;

@end
