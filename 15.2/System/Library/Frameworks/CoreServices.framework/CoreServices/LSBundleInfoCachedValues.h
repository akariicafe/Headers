@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : LSPropertyList

@property (readonly, nonatomic) NSSet *allKeys;
@property (readonly, nonatomic) NSDictionary *rawValues;

- (id)numberForKey:(id)a0;
- (id)dictionaryForKey:(id)a0 valuesOfClass:(Class)a1;
- (id)dictionaryForKey:(id)a0;
- (id)_initWithKeys:(id)a0 forDictionary:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)_expensiveDictionaryRepresentation;
- (id)objectForKey:(id)a0 ofType:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)arrayForKey:(id)a0 withValuesOfClass:(Class)a1;

@end
