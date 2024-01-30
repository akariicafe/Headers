@class NSMutableDictionary;

@interface SSMemoryEntity : NSObject <NSCopying>

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyValues;
@property (readonly, copy, nonatomic) NSMutableDictionary *externalPropertyValues;

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;

- (id)valueForProperty:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithDatabaseEntity:(id)a0 properties:(id)a1;
- (void)reloadFromDatabaseEntity:(id)a0 properties:(id)a1;
- (void)setExternalValuesWithDictionary:(id)a0;
- (void)setValue:(id)a0 forExternalProperty:(id)a1;
- (void)setValues:(id *)a0 forExternalProperties:(const id *)a1 count:(long long)a2;
- (void)setValues:(id *)a0 forProperties:(const id *)a1 count:(long long)a2;
- (void)setValuesWithDictionary:(id)a0;
- (id)valueForExternalProperty:(id)a0;

@end
