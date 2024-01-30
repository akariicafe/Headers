@interface AVTCoreDataPersistentStoreConfiguration : NSObject

+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)remoteConfigurationWithEnvironment:(id)a0;
+ (id)remoteConfigurationWithDaemonClient:(id)a0 environment:(id)a1;
+ (id)modelV1;
+ (id)localConfigurationWithStoreLocation:(id)a0 environment:(id)a1;

@end
