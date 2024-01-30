@class NSString, NSArray, SSSQLitePredicate;

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying>

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *orderingClause;
@property (copy, nonatomic) NSArray *orderingDirections;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (copy, nonatomic) SSSQLitePredicate *predicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_newSelectSQLWithProperties:(const id *)a0 count:(unsigned long long)a1 columns:(id)a2;

@end
