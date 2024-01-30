@class NSString, NSDictionary, AMSMetricsIdentifierKey, NSError;

@interface JetEngine.JEMetricsSecretMigrator : NSObject

+ (void)migrateSecretIfNecessaryAndReturnSecretValueWithNamespace:(NSString *)a0 topic:(NSString *)a1 secretKey:(AMSMetricsIdentifierKey *)a2 configuration:(NSDictionary *)a3 completionHandler:(void (^)(NSString *, NSError *))a4;

- (id)init;

@end
