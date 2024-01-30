@interface ASVMemoryLimits : NSObject

+ (unsigned long long)currentMemoryFootprint;
+ (unsigned long long)processMemory;
+ (unsigned long long)thumbnailMemoryAvailableForTextures;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnHighMemoryDevices;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnThisDevice;

@end
