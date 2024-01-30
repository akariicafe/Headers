@interface MLCPlatformInfo : NSObject

+ (id)bootArgs;
+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (id)osVersion;
+ (id)aneSubType;
+ (long long)randomSeed;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)seedEnvVariable;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (id)aneKeepPlistEnvVariable;
+ (id)aneSaveGraphPartitioningConfig;
+ (int)aneSubTypeVersion;
+ (BOOL)aneUsageUnsupported;
+ (int)getMinGpuSocVersionForMicroBenchmark;
+ (id)getRandomSeed;
+ (BOOL)gpuUsageUnsupported;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (BOOL)isAnePlistKept;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (BOOL)isRNGSeeded;
+ (id)mpsGraphConvolutionEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (void)setRandomSeedTo:(id)a0;

@end
