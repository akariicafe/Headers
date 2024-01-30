@interface ICSettingsUtilities : NSObject

+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)registerDefaults:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;

@end
