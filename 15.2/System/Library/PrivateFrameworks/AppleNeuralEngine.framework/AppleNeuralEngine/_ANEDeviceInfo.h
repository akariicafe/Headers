@interface _ANEDeviceInfo : NSObject

+ (BOOL)precompiledModelChecksDisabled;
+ (id)buildVersion;
+ (id)bootArgs;
+ (id)aneSubType;
+ (BOOL)isInternalBuild;
+ (BOOL)hasANE;

@end
