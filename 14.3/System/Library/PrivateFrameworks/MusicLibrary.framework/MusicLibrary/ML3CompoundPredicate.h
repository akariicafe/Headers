@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

@property (retain, nonatomic) NSArray *predicates;
@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner;

+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (void).cxx_destruct;
- (id)initWithPredicates:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)databaseStatementParameters;
- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (id)spotlightPredicate;

@end
