@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate

@property (retain, nonatomic) ML3Predicate *predicate;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPredicate:(id)a0;

- (id)initWithPredicate:(id)a0;
- (id)databaseStatementParameters;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
