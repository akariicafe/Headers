@interface MLCPlatformInfo : NSObject

+ (id)osVersion;
+ (BOOL)isInternalBuild;
+ (long long)randomSeed;
+ (id)bootArgs;
+ (id)buildVersion;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUsageUnsupported;
+ (id)seedEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (BOOL)aneUsageUnsupported;
+ (BOOL)isRNGSeeded;
+ (int)getMinGpuSocVersionForMicroBenchmark;

@end
