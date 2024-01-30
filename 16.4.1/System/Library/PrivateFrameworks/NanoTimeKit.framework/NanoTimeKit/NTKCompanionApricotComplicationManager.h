@class NSString, NTKComplicationCollection, NSMutableDictionary, NSMapTable, CLKDevice, NSDictionary;

@interface NTKCompanionApricotComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKApricotComplicationProvider, CLKComplicationWidgetMigrationDataSource> {
    CLKDevice *_device;
    NTKComplicationCollection *_lock_complicationCollection;
    NSMutableDictionary *_lock_clientToRecords;
    NSMapTable *_lock_descriptorToRecord;
    NSDictionary *_lock_appLookup;
    BOOL _lock_appsLoaded;
    BOOL _lock_collectionLoaded;
    BOOL _lock_fetchingApps;
    BOOL _lock_wantsAppFetch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)_setup;
- (void)complicationCollectionDidLoad:(id)a0;
- (void).cxx_destruct;
- (id)sampleTemplateForWidget:(id)a0 family:(long long)a1;
- (void)_fetchInstalledApps;
- (void)_lock_updateAppNames;
- (void)_lock_updateAppNamesForClientIdentifer:(id)a0;
- (void)_lock_updateRecordsForAllClients;
- (void)_lock_updateRecordsForClientIdentifier:(id)a0;
- (void)_setAppLookup:(id)a0;
- (void)_updateInstalledApps;
- (void)_updateLoaded;
- (id)cachedWidgetMigrationForClientIdentifier:(id)a0 descriptor:(id)a1;
- (void)complicationCollection:(id)a0 didUpdateComplicationDescriptorsForClient:(id)a1;
- (void)complicationCollectionDidReload:(id)a0;
- (void)enumerateDescriptorsCompatibleWithFamilies:(id)a0 withBlock:(id /* block */)a1;
- (id)infoForDescriptor:(id)a0;
- (void)loadWidgetMigrationsForClientIdentifier:(id)a0 descriptor:(id)a1 completion:(id /* block */)a2;
- (BOOL)vendorExistsForContainerBundleIdentifier:(id)a0;
- (BOOL)vendorExistsWithDescriptor:(id)a0;

@end
