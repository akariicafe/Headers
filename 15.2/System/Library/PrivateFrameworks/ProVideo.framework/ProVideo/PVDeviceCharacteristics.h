@interface PVDeviceCharacteristics : NSObject

+ (BOOL)hasExtendedColorDisplay;
+ (int)architectureType;
+ (long long)actualMemory;
+ (BOOL)isLowMemDevice;
+ (void)Initialize;
+ (BOOL)colorSyncCapable;

@end
