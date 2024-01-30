@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)privacyPreferencesDataSource;
+ (id)ageGatingDataSource;

- (id)initWithUserDefaults:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void).cxx_destruct;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;

@end
