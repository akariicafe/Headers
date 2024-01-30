@class NSString, ML3Predicate, NSArray, ML3AggregateQuery, ML3MusicLibrary;

@interface ML3Query : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *selectPersistentIDsSQL;
@property (readonly, nonatomic) NSString *selectCountSQL;
@property (readonly, nonatomic) NSString *persistentIDProperty;
@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) Class entityClass;
@property (readonly, nonatomic) ML3Predicate *predicate;
@property (readonly, nonatomic) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (readonly, nonatomic) NSArray *orderingTerms;
@property (readonly, nonatomic) NSString *propertyToCount;
@property (readonly, nonatomic) BOOL hasEntities;
@property (readonly, nonatomic) long long anyEntityPersistentID;
@property (readonly, nonatomic) unsigned long long countOfEntities;
@property (readonly, nonatomic) ML3AggregateQuery *nonDirectAggregateQuery;
@property (readonly, nonatomic) NSString *sectionProperty;
@property (readonly, nonatomic) BOOL usingSections;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) BOOL filtersOnDynamicProperties;

- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(BOOL)a1 sectionProperty:(id)a2 cancelBlock:(id /* block */)a3 usingBlock:(id /* block */)a4;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)a0 usingBlock:(id /* block */)a1;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 distinct:(BOOL)a2;
- (BOOL)deleteAllEntitiesFromLibrary;
- (BOOL)hasRowForColumn:(id)a0;
- (void)loadNamesFromLibrary:(id)a0 onConnection:(id)a1 forPredicate:(id)a2 loadAllNames:(BOOL)a3 cancelHandler:(id /* block */)a4;
- (void)encodeWithCoder:(id)a0;
- (id)enumerationDatabaseResultForSQL:(id)a0 onConnection:(id)a1 withParameters:(id)a2;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)reverseQuery;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 directionality:(id)a2;
- (id)countStatementParameters;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)a0 usingConnection:(id)a1;
- (id)selectUnorderedPersistentIDsSQL;
- (id)sectionsParameters;
- (id)description;
- (id)initWithLibrary:(id)a0 entityClass:(Class)a1 predicate:(id)a2 orderingTerms:(id)a3 usingSections:(BOOL)a4 nonDirectAggregateQuery:(id)a5 propertyToCount:(id)a6 options:(long long)a7;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 distinct:(BOOL)a2;
- (id)lowerBoundParametersForOrderingTerms:(id)a0 lowerBoundPersistentID:(long long)a1;
- (id)nameOrderPropertyForProperty:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)selectSectionsSQL;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1;
- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(BOOL)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)countOfDistinctRowsForColumn:(id)a0;
- (id)sections;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 limit:(unsigned long long)a2;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 directionality:(id)a3 usingLowerBound:(BOOL)a4;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1 distinct:(BOOL)a2;
- (id)persistentIDParameters;
- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(BOOL)a1 cancelBlock:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 directionality:(id)a3 usingLowerBound:(BOOL)a4 distinct:(BOOL)a5 limit:(unsigned long long)a6;
- (void)enumeratePersistentIDsAndProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 limit:(unsigned long long)a3;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)valueForAggregateFunction:(id)a0 onEntitiesForProperty:(id)a1;

@end
