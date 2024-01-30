@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)hasANE;
+ (id)bootArgs;
+ (id)buildVersion;
+ (id)aneSubType;
+ (BOOL)precompiledModelChecksDisabled;

@end
