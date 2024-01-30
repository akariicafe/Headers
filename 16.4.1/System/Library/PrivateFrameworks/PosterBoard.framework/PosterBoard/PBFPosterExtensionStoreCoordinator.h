@class NSObject, NSString, NSDictionary, NSURL, NSDate, NSMutableDictionary, NSFileManager;
@protocol OS_dispatch_queue;

@interface PBFPosterExtensionStoreCoordinator : NSObject <PBFDataComponentRefreshStateProviding> {
    NSURL *_descriptorsContainerURL;
    NSURL *_staticDescriptorsContainerURL;
    NSURL *_configurationContainerURL;
    NSURL *_accessQueue_transientInternalInfoURL;
    NSURL *_accessQueue_providerInfoURL;
    NSDictionary *_accessQueue_providerInfo;
    NSMutableDictionary *_accessQueue_posterDescriptorStoreCoordinatorsForURL;
    NSMutableDictionary *_accessQueue_staticPosterDescriptorStoreCoordinatorsForURL;
    NSMutableDictionary *_accessQueue_posterConfigurationStoreCoordinatorsForURL;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastRefreshDescriptorDate;
@property (readonly, copy, nonatomic) NSString *lastRefreshDescriptorReason;

+ (id)providerInfoURLForContainerURL:(id)a0;

- (id)_accessQueue_providerInfo;
- (id)_accessQueue_descriptionStoreCoordinatorForPosterUUID:(id)a0;
- (id)_accessQueue_lastRefreshDescriptorDate;
- (id)staticDescriptorStoreCoordinatorsWithError:(out id *)a0;
- (id)configurationStoreCoordinatorsWithError:(id *)a0;
- (id)_accessQueue_createStaticDescriptorStoreCoordinatorForPosterUUID:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)_accessQueue_dynamicDescriptorStoreCoordinatorsWithError:(out id *)a0;
- (id)determineRefreshStateWithContext:(id)a0;
- (void)reapEverythingExceptLatestVersion;
- (id)createStaticDescriptorStoreCoordinatorForIdentifier:(id)a0 error:(out id *)a1;
- (id)staticDescriptorStoreCoordinatorForIdentifier:(id)a0;
- (void)_accessQueue_providerInfoSetObject:(id)a0 forKey:(id)a1;
- (void)_accessQueue_writeTransientInternalInfo:(id)a0 error:(out id *)a1;
- (BOOL)_accessQueue_teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 version:(unsigned long long)a1 error:(id *)a2;
- (id)staticDescriptorStoreCoordinatorForPosterUUID:(id)a0;
- (BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;
- (id)_accessQueue_staticPosterDescriptorStoreCoordinatorsWithError:(out id *)a0;
- (id)providerInfoObjectForKey:(id)a0;
- (void)providerInfoSetObject:(id)a0 forKey:(id)a1;
- (void)_accessQueue_teardownAllStaticDescriptorStoreCoordinators;
- (BOOL)_accessQueue_teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (void)_accessQueue_bumpLastRefreshDescriptorDate:(id)a0 reason:(id)a1;
- (id)_accessQueue_transientInternalInfo;
- (BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (id)dynamicDescriptorStoreCoordinatorsWithError:(id *)a0;
- (id)_accessQueue_createDescriptorStoreCoordinatorForPosterUUID:(id)a0 identifier:(id)a1 error:(id *)a2;
- (BOOL)teardownDynamicDescriptorStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (id)_accessQueue_configurationStoreCoordinatorForPosterUUID:(id)a0;
- (id)posterStaticDescriptorLatestVersionPaths;
- (void)markDescriptorsAsRefreshed:(id)a0;
- (id)_accessQueue_createConfigurationStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (id)deleteEnvironment;
- (id)dynamicPosterDescriptorLatestVersionPaths;
- (id)_accessQueue_dynamicPosterDescriptorLatestVersionPaths;
- (void)enumerateConfigurationStoreCoordinators:(id /* block */)a0;
- (id)_accessQueue_setupEnvironmentIfNecessary;
- (id)dynamicDescriptorStoreCoordinatorForPosterUUID:(id)a0;
- (void)teardownAllDynamicDescriptors;
- (id)_accessQueue_providerInfoURL;
- (BOOL)_accessQueue_teardownDescriptorStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (id)init;
- (id)createDynamicDescriptorStoreCoordinatorForIdentifier:(id)a0 error:(id *)a1;
- (id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)a0;
- (id)description;
- (void)enumerateDescriptorStoreCoordinators:(id /* block */)a0;
- (void)teardownAllStaticDescriptorStoreCoordinators;
- (id)_accessQueue_staticPosterDescriptorLatestVersionPaths;
- (id)createConfigurationStoreCoordinatorForPosterUUID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_accessQueue_transientInternalInfoURL;
- (id)setupEnvironmentIfNecessary;
- (id)_accessQueue_deleteEnvironment;
- (id)configurationStoreCoordinatorForPosterUUID:(id)a0;
- (id)_accessQueue_posterStaticDescriptorLatestVersionPaths;
- (id)_accessQueue_configurationStoreCoordinatorsWithError:(out id *)a0;
- (id)initWithContainerURL:(id)a0 extensionIdentifier:(id)a1;
- (id)_accessQueue_lastRefreshDescriptorReason;

@end
