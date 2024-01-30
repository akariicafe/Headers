@interface PPTCoreUtilities : NSObject

+ (id)getAllowlist;
+ (BOOL)isAllowedMetric:(id)a0;
+ (BOOL)isValidModeForMetric:(id)a0;
+ (BOOL)isAllowedSubsystem:(id)a0 category:(id)a1;
+ (id)getTestAllowlist;
+ (id)md5Hash:(id)a0;
+ (id)getPrivacyAllowlist;

@end
