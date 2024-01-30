@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)SQLJoinClausesForClass:(Class)a0;
- (id)databaseStatementParameters;
- (BOOL)isDynamicForEntityClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)spotlightPredicate;
- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)containsPropertyPredicate:(id)a0 matchingValue:(id)a1 usingComparison:(int)a2;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;

@end
