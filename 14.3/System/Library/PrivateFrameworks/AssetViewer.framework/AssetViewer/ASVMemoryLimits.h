@interface ASVMemoryLimits : NSObject

+ (unsigned long long)processMemory;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnHighMemoryDevices;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnThisDevice;
+ (unsigned long long)thumbnailMemoryAvailableForTextures;

@end
