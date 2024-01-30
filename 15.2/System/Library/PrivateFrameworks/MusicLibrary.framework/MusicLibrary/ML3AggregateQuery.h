@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (void)encodeWithCoder:(id)a0;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (Class)entityClass;
- (unsigned long long)countOfEntities;
- (BOOL)hasEntities;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;
- (void)dealloc;
- (id)persistentIDProperty;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;

@end
