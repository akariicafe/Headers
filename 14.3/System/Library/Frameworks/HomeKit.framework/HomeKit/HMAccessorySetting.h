@class HMAccessorySettingGroup, NSString, NSUUID, _HMAccessorySetting;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging>

@property (readonly) _HMAccessorySetting *internal;
@property (weak) HMAccessorySettingGroup *group;
@property (readonly, copy) NSString *keyPath;
@property (readonly) Class valueClass;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)settingForInternal:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)isWritable;
- (id)init;
- (void).cxx_destruct;
- (void)updateReflected:(BOOL)a0;
- (id)value;
- (void)_settingWillUpdateValue:(id)a0;
- (void)_settingDidUpdateValue:(id)a0;
- (void)settingWillUpdateReflected;
- (void)settingDidUpdateReflected;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternal:(id)a0;
- (id)logIdentifier;

@end
