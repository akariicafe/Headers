@class NSUserDefaults;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (copy, nonatomic) NSUserDefaults *userDefaults;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)userDefaultsDidChange:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)savePreferences;

@end
