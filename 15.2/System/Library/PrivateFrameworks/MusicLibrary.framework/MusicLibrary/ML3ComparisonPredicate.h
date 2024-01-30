@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) int comparison;
@property (readonly, nonatomic) BOOL caseInsensitive;
@property (readonly, copy, nonatomic) NSString *treatNullAsString;
@property (readonly, copy, nonatomic) NSString *transformFunction;

+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 equalToInteger:(long long)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(BOOL)a3;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(BOOL)a3 treatNullAsString:(id)a4;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 transformFunction:(id)a3;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparison:(int)a2;
+ (id)predicateWithProperty:(id)a0 equalToInt64:(long long)a1;

- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)operator;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithProperty:(id)a0 value:(id)a1 comparison:(int)a2 caseInsensitive:(BOOL)a3 transformFunction:(id)a4 treatNullAsString:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (id)valueToBindForOperation:(long long)a0;

@end
