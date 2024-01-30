@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (Class)entityClass;
- (void)encodeWithCoder:(id)a0;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)persistentIDProperty;
- (void)dealloc;
- (BOOL)hasEntities;
- (unsigned long long)countOfEntities;
- (void).cxx_destruct;

@end
