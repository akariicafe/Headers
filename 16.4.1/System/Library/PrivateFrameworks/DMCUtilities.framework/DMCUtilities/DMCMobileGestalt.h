@interface DMCMobileGestalt : NSObject

+ (id)regionInfo;
+ (BOOL)isHomePod;
+ (BOOL)isPad;
+ (id)deviceColor;
+ (id)productName;
+ (BOOL)isWatch;
+ (id)deviceClass;
+ (id)regionCode;
+ (BOOL)isAppleTV;
+ (id)productType;
+ (id)modelNumber;
+ (BOOL)hasTelephonyCapability;
+ (id)buildVersion;
+ (id)serialNumber;
+ (BOOL)hasCellularDataCapability;
+ (id)diskCapacity;
+ (BOOL)isPhone;
+ (id)deviceUDID;
+ (id)diskUsage;
+ (id)_overridableGestaltForKey:(const struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)availableCapacity;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
