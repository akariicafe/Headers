@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)respiratoryPreferencesDataSource;
+ (id)privacyPreferencesDataSource;
+ (id)ageGatingDataSource;

- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)initWithUserDefaults:(id)a0;
- (void).cxx_destruct;

@end
