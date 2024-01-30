@class NSString, _HMContext, HMAccessory, NSUUID, HMFUnfairLock, HMAccessorySettingGroup;
@protocol HMAccessorySettingsDelegate, HMAccessorySettingsContainer, HMAccessorySettingsContainerInternal, HMControllable;

@interface HMAccessorySettings : HMSettings <HMFLogging, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (weak) id<HMControllable> settingsControl;
@property (weak) id<HMAccessorySettingsContainerInternal> settingsContainerInternal;
@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) id<HMAccessorySettingsDelegate> delegate;
@property (readonly, weak) HMAccessory *accessory;
@property (readonly, weak) id<HMAccessorySettingsContainer> settingsContainer;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (id)localizationKeyForKeyPath:(id)a0;

- (void)_configureWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithSettingsContainer:(id)a0 settingsControl:(id)a1 rootGroup:(id)a2;
- (void)_updateSettingsWithBlock:(id /* block */)a0;
- (void)_notifyDelegateDidUpdateKeyPath:(id)a0;

@end
