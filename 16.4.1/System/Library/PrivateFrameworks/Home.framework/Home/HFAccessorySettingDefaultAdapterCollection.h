@class NSSet, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, HFAccessorySettingAdapter;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject

@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter;
@property (retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter;
@property (retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter;
@property (readonly, nonatomic) NSSet *allAdapters;

- (void).cxx_destruct;

@end
