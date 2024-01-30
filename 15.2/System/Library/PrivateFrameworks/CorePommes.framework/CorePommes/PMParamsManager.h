@interface PMParamsManager : NSObject

+ (id)log;
+ (id)getDefaultParamDict;
+ (id)paramsFromString:(id)a0;
+ (BOOL)isValidParamKey:(id)a0;
+ (id)defaultParamsSet;
+ (BOOL)isValidParamTypeWithKey:(id)a0 paramType:(int)a1;
+ (id)pmParamKeyValueWithKey:(id)a0 boolValue:(BOOL)a1;
+ (id)pmParamKeyValueWithKey:(id)a0 intValue:(int)a1;
+ (id)pmParamKeyValueWithKey:(id)a0 floatValue:(float)a1;
+ (id)pmParamKeyValueWithKey:(id)a0 stringValue:(id)a1;
+ (id)loadSearchParamsFromUserDefaults;
+ (id)paramKeySet:(id)a0;
+ (id)getDefaultSearchParamsWithCaching:(BOOL)a0;
+ (id)resolveParamWithDefaultKV:(id)a0 withOverrideParamSet:(id)a1 withOverrideParams:(id)a2;
+ (void)saveSearchParamsToUserDefaults;
+ (id)paramsFromFallback;
+ (id)resolveOverrides:(id)a0 withEnableParamCaching:(BOOL)a1;
+ (id)paramFromKeyValues:(id)a0;

@end
