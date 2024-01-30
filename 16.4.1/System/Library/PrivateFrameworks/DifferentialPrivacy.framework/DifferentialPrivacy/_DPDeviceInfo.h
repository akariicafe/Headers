@interface _DPDeviceInfo : NSObject

+ (BOOL)isRunningUnitTests;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForPrio;
+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;

@end
