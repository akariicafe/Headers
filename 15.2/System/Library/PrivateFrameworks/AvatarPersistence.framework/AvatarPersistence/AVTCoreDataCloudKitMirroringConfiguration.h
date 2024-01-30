@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (void)configureMirroringRequestOptions:(id)a0 discretionary:(BOOL)a1;
+ (void)configureMirroringRequestOptions:(id)a0;
+ (id)managedModelAttributesRequiredForMirroring;
+ (BOOL)cloudKitMirroringEnabled;
+ (void)configureStoreDescriptionForMirroring:(id)a0 logger:(id)a1;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)a0 completionHandler:(id /* block */)a1;
+ (id)createMirroringHandlerWithEnvironment:(id)a0;
+ (id)currentContainerIdentifier;
+ (BOOL)manateeContainer:(id)a0;

@end
