@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate

@property (retain, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)databaseStatementParameters;
- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_orderedValues;
- (id)initWithProperty:(id)a0 values:(id)a1;

@end
