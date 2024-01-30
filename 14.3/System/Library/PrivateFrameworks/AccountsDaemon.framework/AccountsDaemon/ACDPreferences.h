@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (id)objectForKey:(id)a0;
- (double)serverTimeoutInterval;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;

@end
