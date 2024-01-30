@class NTKComplicationCollection, NSDictionary, NSString, CLKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKComplicationCollection *remoteComplications;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } remoteComplicationsLock;
@property (retain, nonatomic) NSDictionary *installedComplications;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } installedComplicationsLock;
@property (retain, nonatomic) NSDictionary *syncedComplications;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } syncedComplicationsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL fetchingApps;
@property (nonatomic) BOOL wantsAppFetch;
@property (nonatomic) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_activeDeviceChanged;
- (void)dealloc;
- (void)complicationCollectionDidLoad:(id)a0;
- (id)init;
- (void)_load;
- (void).cxx_destruct;
- (void)_appStartedInstall;
- (void)_fetchInstalledApps;
- (void)_queryInstalledApps;
- (void)_queue_reloadApps;
- (void)_reloadApps;
- (id)_safeComplications;
- (id)_safeInstalledComplications;
- (void)complicationCollection:(id)a0 didRemoveSampleTemplatesForClient:(id)a1;
- (void)complicationCollection:(id)a0 didUpdateComplicationDescriptorsForClient:(id)a1;
- (void)complicationCollection:(id)a0 didUpdateSampleTemplateForClient:(id)a1 descriptor:(id)a2;
- (void)enumerateComplicationDescriptorsForClientIdentifier:(id)a0 family:(long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)a0 withBlock:(id /* block */)a1;
- (id)itemIdForVendorWithClientIdentifier:(id)a0;
- (id)localizedAppNameForClientIdentifier:(id)a0;
- (void)notifyAppForClientIdentifier:(id)a0 ofSharedComplicationDescriptors:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)vendorExistsWithClientIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end
