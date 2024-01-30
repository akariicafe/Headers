@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (void)_preferencesDidChange;
- (id)init;
- (id)objectForKey:(id)a0 withDefaultValue:(id)a1;
- (void)registerDefaultsIfKeyNotSet:(id)a0 registrationBlock:(id /* block */)a1;

@end
