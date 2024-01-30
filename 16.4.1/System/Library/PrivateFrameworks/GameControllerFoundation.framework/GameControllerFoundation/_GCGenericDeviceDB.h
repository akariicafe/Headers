@class _GCConfigurationBundleLocator, NSString, _GCDeviceOnDiskDB, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_workloop;

@interface _GCGenericDeviceDB : NSObject <_GCGenericDeviceDBServiceXPCInterface, _GCGenericDeviceDBService> {
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_queue> *_queue;
    _GCConfigurationBundleLocator *_configurationBundleLocator;
    NSObject<OS_dispatch_source> *_configurationBundleLocatorUpdatedSource;
    _GCDeviceOnDiskDB *_onDiskDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProvider:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_configurationBundlesDidChange:(id)a0;
- (id)modelForDevice:(id)a0;
- (BOOL)_onqueue_updateConfigurationBundles;
- (id)configurationBundles;
- (id)hasModelForDevice:(id)a0;
- (void)hasModelForDevice:(id)a0 reply:(id /* block */)a1;
- (id)preparedModelForDevice:(id)a0;
- (id)preparedModelForDevice:(id)a0 error:(id *)a1;
- (void)preparedModelForDevice:(id)a0 reply:(id /* block */)a1;

@end
