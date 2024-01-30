@protocol _DKSimpleKeyValueStore;

@interface _DKKeyValueStore : NSObject <_DKKeyValueStore> {
    id<_DKSimpleKeyValueStore> _store;
}

+ (id)standardUserDefaultsKeyValueStore;

- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dateForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0 havingClass:(Class)a1;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithSimpleKeyValueStore:(id)a0;

@end
