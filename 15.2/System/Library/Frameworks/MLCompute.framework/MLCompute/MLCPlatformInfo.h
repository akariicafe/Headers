@interface MLCPlatformInfo : NSObject

+ (id)osVersion;
+ (id)buildVersion;
+ (id)bootArgs;
+ (id)aneSubType;
+ (BOOL)isInternalBuild;
+ (long long)randomSeed;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
+ (id)aneSaveGraphPartitioningConfig;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUsageUnsupported;
+ (id)mpsGraphConvolutionEnvVariable;
+ (id)seedEnvVariable;
+ (BOOL)isRNGSeeded;
+ (int)aneSubTypeVersion;
+ (id)aneKeepPlistEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (BOOL)aneUsageUnsupported;
+ (void)setRandomSeedTo:(id)a0;
+ (id)getRandomSeed;
+ (int)getMinGpuSocVersionForMicroBenchmark;
+ (BOOL)isAnePlistKept;

@end
