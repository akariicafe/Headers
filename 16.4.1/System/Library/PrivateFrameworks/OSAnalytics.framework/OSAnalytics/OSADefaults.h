@interface OSADefaults : NSObject

+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)sendOperation:(unsigned long long)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;

@end
