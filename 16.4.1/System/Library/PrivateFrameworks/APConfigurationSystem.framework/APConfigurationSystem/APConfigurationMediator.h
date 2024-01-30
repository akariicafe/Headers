@interface APConfigurationMediator : NSObject

+ (void)_removeFileAtPath:(id)a0;
+ (id)_configSystemErrorWithDescription:(id)a0;
+ (void)_createPlistFile:(id)a0 atPath:(id)a1;
+ (id)_loadFromDefaultsForClass:(Class)a0 error:(id *)a1;
+ (id)_loadFromJSONForClass:(Class)a0 error:(id *)a1;
+ (id)_loadFromPathForClass:(Class)a0 error:(id *)a1;
+ (id)configurationForClass:(Class)a0;

@end
