@interface TUUserConfiguration : TUConfiguration

+ (id)registeredDefaults;
+ (id)userDefaults;

- (void)synchronize;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;

@end
