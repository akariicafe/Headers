@class NSString, HMHomeManager, NSCondition;

@interface COHomeKitAdapter : NSObject <HMHomeManagerDelegate, HMHomeDelegatePrivate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _ready;
}

@property (readonly, nonatomic) HMHomeManager *homekit;
@property (readonly, nonatomic) NSCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithHomeManager:(id)a0;
- (BOOL)isReady;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (id)alarmsForAccessory:(id)a0;
- (id)mediaSystemForAccessory:(id)a0;
- (id)settingsForKeyPath:(id)a0 onMediaObject:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)accessoriesInRoom:(id)a0;
- (id)accessoriesForSiriContextTargetReference:(id)a0;
- (id)addAlarm:(id)a0 toAccessory:(id)a1;
- (id)distantAccessorySettingForAccessorySetting:(id)a0 onAccessory:(id)a1;
- (id)allAccessoriesForSiriContextTargetReference:(id)a0;
- (void)home:(id)a0 didRemoveZone:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1 toZone:(id)a2;
- (void)home:(id)a0 didAddZone:(id)a1;
- (id)alarmsCollectionForAccessory:(id)a0 isMediaSystem:(BOOL *)a1;
- (id)accessoriesInZone:(id)a0;
- (id)distantSettingsForKeyPath:(id)a0 onAccessory:(id)a1;
- (void)home:(id)a0 didUpdateRoom:(id)a1 forAccessory:(id)a2;
- (void)home:(id)a0 didRemoveMediaSystem:(id)a1;
- (id)accessorySettingForDistantAccessorySetting:(id)a0;
- (void).cxx_destruct;
- (id)currentAccessory;
- (id)init;
- (id)settingsForKeyPath:(id)a0 onAccessory:(id)a1;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)homeManager:(id)a0 didUpdateAuthorizationStatus:(unsigned long long)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (id)zoneForAccessory:(id)a0;
- (id)settingsForKeyPath:(id)a0 fromSettings:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (id)removeAlarm:(id)a0 fromAccessory:(id)a1;
- (void)_withLock:(id /* block */)a0;
- (BOOL)isAlarmsCollectionSetting:(id)a0 forAccessory:(id)a1;
- (BOOL)hasOptedToHH2;
- (id)accessoriesInMediaSystem:(id)a0;
- (id)roomForAccessory:(id)a0;
- (id)updateAlarm:(id)a0 onAccessory:(id)a1;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)home:(id)a0 didAddMediaSystem:(id)a1;
- (id)accessoryWithUniqueIdentifier:(id)a0;

@end
