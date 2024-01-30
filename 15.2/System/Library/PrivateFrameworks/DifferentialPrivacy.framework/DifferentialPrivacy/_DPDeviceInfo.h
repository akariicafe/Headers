@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForPrio;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDataCollectionEnabled;

@end
