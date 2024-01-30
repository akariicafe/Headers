@interface ACDPreferences : NSObject

@property (class, readonly) ACDPreferences *sharedPreferences;

- (void)setObject:(id)a0 forKey:(id)a1;
- (double)serverTimeoutInterval;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void)reset;

@end
