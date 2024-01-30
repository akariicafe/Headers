@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)countOfEntities;
- (id)initWithCoder:(id)a0;
- (id)persistentIDProperty;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (BOOL)hasEntities;
- (Class)entityClass;
- (void)encodeWithCoder:(id)a0;

@end
