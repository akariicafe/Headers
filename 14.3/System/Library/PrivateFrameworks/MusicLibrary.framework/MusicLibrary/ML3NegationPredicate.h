@interface ML3NegationPredicate : ML3UnaryPredicate

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;

@end
