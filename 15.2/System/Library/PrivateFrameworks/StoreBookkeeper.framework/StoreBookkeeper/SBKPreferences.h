@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (void)_preferencesDidChange;
- (void)registerDefaultsIfKeyNotSet:(id)a0 registrationBlock:(id /* block */)a1;
- (id)objectForKey:(id)a0 withDefaultValue:(id)a1;

@end
