@class NSString, HDSPEnvironment, NSMutableSet, HKSPAccumulator, HDSPSyncedDefaultsConfiguration;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults, HKSPUserDefaults;

@interface HDSPSyncedDefaults : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults> {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    id<HKSPUserDefaults> _localDefaults;
    id<HDSPSyncedUserDefaults> _nanoDefaults;
    NSMutableSet *_keysNeedingSynchronize;
    HKSPAccumulator *_syncAccumulator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<HDSPSyncedUserDefaultsExternalChangeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hdsp_setExternalChangeDelegate:(id)a0;
- (id)hksp_dictionaryRepresentation;
- (id)hksp_dictionaryRepresentationForKeys:(id)a0;
- (void)hksp_synchronizeKeys:(id)a0;
- (id)_defaultsForKey:(id)a0;
- (void)hksp_setBool:(BOOL)a0 forKey:(id)a1;
- (void)hksp_setInteger:(long long)a0 forKey:(id)a1;
- (void)syncedUserDefaultsDidChangeExternally:(id)a0;
- (void)saveCurrentDataVersion;
- (void)_throttled_synchronizeKeys:(id)a0;
- (void)hksp_setObject:(id)a0 forKey:(id)a1;
- (void)hksp_saveDictionary:(id)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1 nanoDefaultsProvider:(id /* block */)a2 throttleInterval:(double)a3;
- (id /* block */)_nanoDefaultsProvider;
- (void)hksp_removeObjectsForKeys:(id)a0;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)hksp_setFloat:(float)a0 forKey:(id)a1;
- (long long)hksp_integerForKey:(id)a0;
- (void)_setDefaultForKey:(id)a0 setBlock:(id /* block */)a1;
- (void)syncedUserDefaults:(id)a0 didChangeExternallyForKeys:(id)a1;
- (id)hksp_objectForKey:(id)a0;
- (void)hksp_removeObjectForKey:(id)a0;
- (id)localDefaultsDictionaryRepresentation;
- (void)_withLock:(id /* block */)a0;
- (id)hksp_dataForKey:(id)a0;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)a0;
- (void)_nanoDefaultsDidReceiveExternalChange;
- (void)hksp_synchronize;
- (float)hksp_floatForKey:(id)a0;
- (void)_syncCurrentDataVersions;
- (BOOL)hksp_boolForKey:(id)a0;

@end
