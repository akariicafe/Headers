@class NSString, NSArray, AMSSQLitePredicate;

@interface AMSSQLiteQueryDescriptor : NSObject <NSCopying>

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *orderingClause;
@property (copy, nonatomic) NSArray *orderingDirections;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (copy, nonatomic) AMSSQLitePredicate *predicate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_newSelectSQLWithProperties:(id)a0 columns:(id)a1;

@end
