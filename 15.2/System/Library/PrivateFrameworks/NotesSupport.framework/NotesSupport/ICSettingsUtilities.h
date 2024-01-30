@interface ICSettingsUtilities : NSObject

+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)registerDefaults:(id)a0;
+ (id)objectForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;

@end
