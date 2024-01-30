@class NSMutableDictionary, NSDictionary, NTKComplicationCollection, NSString, CLKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider>

@property (retain, nonatomic) NTKComplicationCollection *remoteComplications;
@property (retain, nonatomic) NSDictionary *installedComplications;
@property (retain, nonatomic) NSMutableDictionary *syncedComplications;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_load;
- (id)localizedAppNameForClientIdentifier:(id)a0;
- (void)_activeDeviceChanged;
- (void)_appStartedInstall;
- (void)_fetchInstalledApps;
- (void)_queue_reloadApps;
- (id)_safeComplications;
- (id)_safeInstalledComplications;
- (void)_reloadApps;
- (void)complicationCollection:(id)a0 didUpdateSampleTemplateForClient:(id)a1 descriptor:(id)a2;
- (void)complicationCollection:(id)a0 didUpdateComplicationDescriptorsForClient:(id)a1;
- (void)complicationCollectionDidLoad:(id)a0;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)a0 withBlock:(id /* block */)a1;
- (void)enumerateComplicationDescriptorsForClientIdentifier:(id)a0 family:(long long)a1 withBlock:(id /* block */)a2;
- (void)notifyAppForClientIdentifier:(id)a0 ofSharedComplicationDescriptors:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)vendorExistsWithClientIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (id)itemIdForVendorWithClientIdentifier:(id)a0;
- (void)complicationCollection:(id)a0 didRemoveSampleTemplatesForClient:(id)a1;

@end
