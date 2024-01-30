@interface MXSourceUtilities : NSObject

+ (BOOL)anyClientsAvailable;
+ (BOOL)isMetricKitClient:(id)a0 forUser:(unsigned int)a1;
+ (BOOL)isMetricKitClient:(id)a0;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;

@end
