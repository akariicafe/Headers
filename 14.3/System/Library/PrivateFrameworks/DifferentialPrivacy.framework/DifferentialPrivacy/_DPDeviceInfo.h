@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isInternalBuild;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isDisabledByTasking;

@end
