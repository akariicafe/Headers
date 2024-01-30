@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (BOOL)cloudKitMirroringEnabled;
+ (void)configureMirroringRequestOptions:(id)a0;
+ (void)configureMirroringRequestOptions:(id)a0 discretionary:(BOOL)a1;
+ (void)configureStoreDescriptionForMirroring:(id)a0 logger:(id)a1;
+ (id)createMirroringHandlerWithEnvironment:(id)a0;
+ (id)currentContainerIdentifier;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)a0 completionHandler:(id /* block */)a1;
+ (id)managedModelAttributesRequiredForMirroring;
+ (BOOL)manateeContainer:(id)a0;

@end
