@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)truePredicate;
+ (id)falsePredicate;

- (id)_predicateString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;

@end
