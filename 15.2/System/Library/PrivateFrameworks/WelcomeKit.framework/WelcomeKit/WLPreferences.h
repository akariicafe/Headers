@interface WLPreferences : NSObject

+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (id)stringForKey:(id)a0;
+ (char)boolForKey:(id)a0;
+ (void)removeForKey:(id)a0;

@end
