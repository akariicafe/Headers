@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

@property (retain, nonatomic) NSArray *predicates;
@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner;

+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (id)SQLJoinClausesForClass:(Class)a0;
- (id)databaseStatementParameters;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)spotlightPredicate;
- (id)initWithPredicates:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;

@end
