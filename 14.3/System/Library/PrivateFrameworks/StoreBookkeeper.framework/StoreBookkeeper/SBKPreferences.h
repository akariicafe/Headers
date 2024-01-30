@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0 withDefaultValue:(id)a1;
- (void)registerDefaultsIfKeyNotSet:(id)a0 registrationBlock:(id /* block */)a1;
- (void)_preferencesDidChange;

@end
