@class NSUserDefaults;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (copy, nonatomic) NSUserDefaults *userDefaults;

- (void)removeObjectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)userDefaultsDidChange:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)savePreferences;

@end
