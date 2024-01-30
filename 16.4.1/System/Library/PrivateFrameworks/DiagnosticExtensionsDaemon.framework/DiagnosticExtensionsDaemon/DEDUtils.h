@interface DEDUtils : NSObject

+ (id)deviceModel;
+ (id)deviceColor;
+ (id)osBuild;
+ (id)deviceName;
+ (id)deviceClass;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceProductType;
+ (int)deviceHomeButtonType;
+ (id)deviceEnclosureColor;
+ (BOOL)isInternalInstall;
+ (id)modelForProductType:(id)a0;
+ (id)platform;
+ (id)deviceUniformTypeIdentifier;
+ (id)uniqueDeviceSpecifier;
+ (id)sharedLog;
+ (id)deviceHardwareCodename;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (BOOL)isDataClassBAvailable;
+ (id)deviceSerialNumber;
+ (BOOL)isDebugRequestsEnabled;

@end
