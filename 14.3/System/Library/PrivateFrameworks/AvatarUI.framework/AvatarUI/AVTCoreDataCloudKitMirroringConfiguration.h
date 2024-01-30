@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (id)createMirroringHandlerWithEnvironment:(id)a0;
+ (id)currentContainerIdentifier;
+ (BOOL)manateeContainer:(id)a0;
+ (BOOL)cloudKitMirroringEnabled;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)a0 completionHandler:(id /* block */)a1;
+ (void)configureStoreDescriptionForMirroring:(id)a0 logger:(id)a1;
+ (id)managedModelAttributesRequiredForMirroring;
+ (void)configureMirroringRequestOptions:(id)a0 discretionary:(BOOL)a1;
+ (void)configureMirroringRequestOptions:(id)a0;

@end
