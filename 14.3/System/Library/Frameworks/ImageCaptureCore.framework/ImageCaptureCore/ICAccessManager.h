@interface ICAccessManager : NSObject

+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)a0;
+ (void)updateBundleIdentifierAccessingExternalMediaDevices:(id)a0 withStatus:(BOOL)a1;
+ (id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+ (void)addBundleIdentifierAccessingExternalMediaDevices:(id)a0;
+ (BOOL)validateBundleIdentifierAccessingExternalMediaDevices:(id)a0;

@end
