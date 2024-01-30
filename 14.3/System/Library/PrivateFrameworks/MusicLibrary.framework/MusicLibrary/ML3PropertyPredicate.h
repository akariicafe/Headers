@class NSString;

@interface ML3PropertyPredicate : ML3Predicate

@property (copy, nonatomic) NSString *property;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)initWithProperty:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (BOOL)isDynamicForEntityClass:(Class)a0;

@end
