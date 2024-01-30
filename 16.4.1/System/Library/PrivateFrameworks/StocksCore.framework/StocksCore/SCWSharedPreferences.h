@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
