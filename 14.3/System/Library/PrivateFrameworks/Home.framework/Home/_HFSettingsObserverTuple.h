@class NSString, NAIdentity, HMSettings, NADeallocationSentinel, HMSetting;
@protocol HFHomeKitSettingsObserver, _HFSettingsObserverTupleOwning;

@interface _HFSettingsObserverTuple : NSObject <HFHomeKitSettingsObserver, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) HMSettings *settings;
@property (retain, nonatomic) HMSetting *setting;
@property (weak, nonatomic) id<HFHomeKitSettingsObserver> observer;
@property (weak, nonatomic) id<_HFSettingsObserverTupleOwning> owner;
@property (retain, nonatomic) NADeallocationSentinel *observerDeallocationSentinel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tupleForSettings:(id)a0 setting:(id)a1 observer:(id)a2 owner:(id)a3;

- (void).cxx_destruct;
- (void)settingsDidUpdate:(id)a0;
- (void)settingsWillUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0 setting:(id)a1 observer:(id)a2 owner:(id)a3;
- (void)_accessorySettingDidUpdate:(id)a0;
- (void)_accessorySettingReflectionStateDidUpdate:(id)a0;

@end
