@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_predicateString;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;

@end
