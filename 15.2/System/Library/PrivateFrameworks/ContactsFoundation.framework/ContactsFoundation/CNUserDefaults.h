@class NSDictionary;
@protocol CNPrimitiveUserDefaults;

@interface CNUserDefaults : NSObject {
    id<CNPrimitiveUserDefaults> _primitiveDefaults;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)standardPreferences;
+ (id)preferencesWithApplicationID:(id)a0;
+ (id)inMemoryPreferences;

- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (long long)integerForKey:(id)a0 keyExists:(BOOL *)a1;
- (id)primitiveDefaults;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)userHasOptedOutOfPreference:(id)a0;
- (id)initWithPrimitiveDefaults:(id)a0;
- (id)primitiveObjectForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (BOOL)userHasOptedInToPreference:(id)a0;
- (void)registerDefaults:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (void)setupAutosync;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (BOOL)boolForKey:(id)a0;

@end
