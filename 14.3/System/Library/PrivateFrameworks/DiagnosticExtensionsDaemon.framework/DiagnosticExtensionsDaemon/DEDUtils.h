@interface DEDUtils : NSObject

+ (id)osBuild;
+ (BOOL)isInternalInstall;
+ (id)deviceName;
+ (id)deviceModel;
+ (id)platform;
+ (id)deviceClass;
+ (id)deviceProductType;
+ (id)deviceEnclosureColor;
+ (id)deviceColor;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceClassForProductType:(id)a0;
+ (id)modelForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;

@end
