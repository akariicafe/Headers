@class NSUserDefaults;
@protocol AFUIPreferencesDelegate;

@interface AFUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
}

@property (weak, nonatomic) id<AFUIPreferencesDelegate> delegate;

- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)initWithSuiteName:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (BOOL)boolForKey:(id)a0;
- (id)initWithDefaultsAtURL:(id)a0;
- (void)_mutateValueForKey:(id)a0 block:(id /* block */)a1;
- (id)initWithDefaultsResource:(id)a0 withExtension:(id)a1 inBundle:(id)a2;

@end
