@interface SCRCUserDefaultsBase : NSObject

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (void)setInt:(int)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (int)intForKey:(id)a0;
- (id)stringForKeyPath:(id)a0;
- (void)setInt:(int)a0 forKeyPath:(id)a1;
- (int)intForKeyPath:(id)a0;
- (void)setFloat:(float)a0 forKeyPath:(id)a1;
- (float)floatForKeyPath:(id)a0;
- (void)setBool:(BOOL)a0 forKeyPath:(id)a1;
- (BOOL)boolForKeyPath:(id)a0;

@end
