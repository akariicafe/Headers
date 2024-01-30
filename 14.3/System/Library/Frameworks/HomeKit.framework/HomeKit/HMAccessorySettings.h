@class NSString, _HMContext, HMAccessory, NSUUID, HMFUnfairLock, HMAccessorySettingGroup;
@protocol HMAccessorySettingsContainer, HMAccessorySettingsDelegate, HMControllable;

@interface HMAccessorySettings : HMSettings <HMFLogging, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (weak) id<HMControllable> settingsControl;
@property (weak) id<HMAccessorySettingsContainer> settingsContainer;
@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) id<HMAccessorySettingsDelegate> delegate;
@property (readonly, weak) HMAccessory *accessory;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (id)localizationKeyForKeyPath:(id)a0;

- (void)_configureWithContext:(id)a0;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_updateSettingsWithBlock:(id /* block */)a0;
- (void)__notifyDelegateSettingsDidUpdate;
- (id)initWithSettingsContainer:(id)a0 settingsControl:(id)a1 rootGroup:(id)a2;

@end
