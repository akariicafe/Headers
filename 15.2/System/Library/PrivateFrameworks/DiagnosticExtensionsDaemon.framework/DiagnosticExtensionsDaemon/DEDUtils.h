@interface DEDUtils : NSObject

+ (id)deviceColor;
+ (id)deviceModel;
+ (id)osBuild;
+ (BOOL)isInternalInstall;
+ (id)deviceName;
+ (id)deviceClass;
+ (id)platform;
+ (id)sharedLog;
+ (id)deviceEnclosureColor;
+ (id)modelForProductType:(id)a0;
+ (id)deviceProductType;
+ (id)deviceClassForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;
+ (id)uniqueDeviceSpecifier;

@end
