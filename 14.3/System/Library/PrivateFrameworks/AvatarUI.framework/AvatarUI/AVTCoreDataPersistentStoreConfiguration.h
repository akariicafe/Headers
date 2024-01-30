@interface AVTCoreDataPersistentStoreConfiguration : NSObject

+ (id)localConfigurationWithStoreLocation:(id)a0 environment:(id)a1;
+ (id)modelV1;
+ (id)currentManagedObjectModel;
+ (id)createModel;
+ (id)remoteConfigurationWithDaemonClient:(id)a0 environment:(id)a1;
+ (id)remoteConfigurationWithEnvironment:(id)a0;

@end
