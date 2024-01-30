@class NSMutableDictionary;

@interface SSMemoryEntity : NSObject <NSCopying>

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyValues;
@property (readonly, copy, nonatomic) NSMutableDictionary *externalPropertyValues;

+ (id)queryWithDatabase:(id)a0 predicate:(id)a1;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;
+ (Class)databaseEntityClass;
+ (id)defaultProperties;

- (id)description;
- (id)valueForProperty:(id)a0;
- (void)setValuesWithDictionary:(id)a0;
- (void)reloadFromDatabaseEntity:(id)a0 properties:(id)a1;
- (void)setValues:(id *)a0 forProperties:(const id *)a1 count:(long long)a2;
- (void)setValues:(id *)a0 forExternalProperties:(const id *)a1 count:(long long)a2;
- (id)initWithDatabaseEntity:(id)a0 properties:(id)a1;
- (void)setValue:(id)a0 forExternalProperty:(id)a1;
- (void)setExternalValuesWithDictionary:(id)a0;
- (id)valueForExternalProperty:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
