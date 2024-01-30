@interface ICAccessManager : NSObject

+ (void)updateBundleIdentifierAccessingExternalMediaDevices:(id)a0 withStatus:(BOOL)a1;
+ (void)addBundleIdentifierAccessingExternalMediaDevices:(id)a0;
+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+ (void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)a0;
+ (BOOL)validateBundleIdentifierAccessingExternalMediaDevices:(id)a0;

@end
