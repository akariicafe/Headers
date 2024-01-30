@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)bootArgs;
+ (BOOL)isInternalBuild;
+ (id)aneSubTypeProductVariant;
+ (id)buildVersion;
+ (id)aneSubTypeVariant;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (BOOL)hasANE;
+ (long long)aneBoardType;
+ (BOOL)precompiledModelChecksDisabled;
+ (id)aneSubType;

@end
