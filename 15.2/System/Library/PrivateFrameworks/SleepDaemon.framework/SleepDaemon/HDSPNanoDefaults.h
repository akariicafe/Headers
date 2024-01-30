@class HKSPThrottler, NSString, HDSPEnvironment, NPSDomainAccessor, NPSManager, HDSPSyncedDefaultsConfiguration, NSObject;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, OS_dispatch_queue;

@interface HDSPNanoDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults> {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsDomainAccessorQueue;
    HKSPThrottler *_notifyThrottler;
}

@property (weak, nonatomic) id<HDSPSyncedUserDefaultsExternalChangeDelegate> delegate;
@property (readonly, nonatomic) NPSDomainAccessor *npsDomainAccessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)hdsp_setExternalChangeDelegate:(id)a0;
- (id)hksp_dictionaryRepresentation;
- (void)_registerForNotifications;
- (id)hksp_dictionaryRepresentationForKeys:(id)a0;
- (void)hksp_synchronizeKeys:(id)a0;
- (void)_handleNanoPreferencesSync;
- (void)hksp_setBool:(BOOL)a0 forKey:(id)a1;
- (void)hksp_setInteger:(long long)a0 forKey:(id)a1;
- (void)hksp_setObject:(id)a0 forKey:(id)a1;
- (void)hksp_saveDictionary:(id)a0;
- (void)hksp_removeObjectsForKeys:(id)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)hksp_setFloat:(float)a0 forKey:(id)a1;
- (long long)hksp_integerForKey:(id)a0;
- (id)hksp_objectForKey:(id)a0;
- (void)hksp_removeObjectForKey:(id)a0;
- (id)hksp_dataForKey:(id)a0;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)a0;
- (void)hksp_synchronize;
- (float)hksp_floatForKey:(id)a0;
- (BOOL)hksp_boolForKey:(id)a0;
- (void)_handleActivePairedDeviceDidChange:(id)a0;
- (void)_resetNPSDomainAccessor;

@end
