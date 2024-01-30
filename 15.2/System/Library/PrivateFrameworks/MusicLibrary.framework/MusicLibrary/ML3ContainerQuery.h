@class NSArray, ML3Predicate, ML3Container;

@interface ML3ContainerQuery : ML3Query {
    ML3Predicate *_containerPredicate;
}

@property (readonly, nonatomic) NSArray *limitedPersistentIDs;
@property (readonly, nonatomic) ML3Container *container;
@property (readonly, nonatomic) BOOL requiresSmartLimiting;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)enumerationDatabaseResultForSQL:(id)a0 onConnection:(id)a1 withParameters:(id)a2;
- (unsigned long long)countOfEntities;
- (BOOL)hasEntities;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countOfDistinctRowsForColumn:(id)a0;
- (id)initWithEntityClass:(Class)a0 container:(id)a1 predicate:(id)a2 orderingTerms:(id)a3;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)a0 ordered:(BOOL)a1;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)valueForAggregateFunction:(id)a0 onEntitiesForProperty:(id)a1;

@end
