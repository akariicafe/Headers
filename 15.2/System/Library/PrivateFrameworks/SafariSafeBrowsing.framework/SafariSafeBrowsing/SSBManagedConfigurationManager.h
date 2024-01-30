@interface SSBManagedConfigurationManager : NSObject

+ (BOOL)isSafeBrowsingEnabledStateLockedDownByRestrictions;
+ (BOOL)restrictedBoolValueForSafeBrowsing;

@end
