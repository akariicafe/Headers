@interface FMPreferencesUtil : NSObject

+ (void)setData:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (id)dictionaryForKey:(id)a0 inDomain:(id)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1 inDomain:(id)a2;
+ (BOOL)boolForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (long long)integerForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (void)synchronizeDomain:(id)a0;
+ (id)dataForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (id)dateForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (id)dateForKey:(id)a0 inDomain:(id)a1;
+ (id)objectForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (id)arrayForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (id)dataForKey:(id)a0 inDomain:(id)a1;
+ (long long)integerForKey:(id)a0 inDomain:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (id)arrayForKey:(id)a0 inDomain:(id)a1;
+ (void)setDictionary:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (BOOL)boolForKey:(id)a0 inDomain:(id)a1;
+ (void)synchronizeDomain:(id)a0 user:(id)a1;
+ (void)setInteger:(long long)a0 forKey:(id)a1 inDomain:(id)a2;
+ (id)dictionaryForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (void)setDate:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (id)stringForKey:(id)a0 inDomain:(id)a1 user:(id)a2;
+ (id)stringForKey:(id)a0 inDomain:(id)a1;
+ (id)objectForKey:(id)a0 inDomain:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setArray:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)removeKey:(id)a0 inDomain:(id)a1;

@end
