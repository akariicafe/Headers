@interface PPTCoreUtilities : NSObject

+ (BOOL)isValidModeForMetric:(id)a0;
+ (BOOL)isAllowedSubsystem:(id)a0 category:(id)a1;
+ (id)getAllowlist;
+ (id)getPrivacyAllowlist;
+ (BOOL)isAllowedMetric:(id)a0;
+ (id)getTestAllowlist;
+ (id)md5Hash:(id)a0;

@end
