@class NSExpression, NSPredicateOperator;

@interface NSComparisonPredicate : NSPredicate {
    void *_reserved2;
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

@property (readonly) unsigned long long predicateOperatorType;
@property (readonly) unsigned long long comparisonPredicateModifier;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly, retain) NSExpression *rightExpression;
@property (readonly) SEL customSelector;
@property (readonly) unsigned long long options;

+ (id)predicateWithLeftExpression:(id)a0 rightExpression:(id)a1 modifier:(unsigned long long)a2 type:(unsigned long long)a3 options:(unsigned long long)a4;
+ (id)predicateWithLeftExpression:(id)a0 rightExpression:(id)a1 customSelector:(SEL)a2;
+ (id)predicateWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightKeyPath:(id)a2;
+ (id)predicateWithPredicateOperator:(id)a0 leftExpression:(id)a1 rightExpression:(id)a2;
+ (id)predicateWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightValue:(id)a2;
+ (BOOL)supportsSecureCoding;

- (id)initWithPredicateOperator:(id)a0 leftExpression:(id)a1 rightExpression:(id)a2;
- (id)initWithLeftExpression:(id)a0 rightExpression:(id)a1 modifier:(unsigned long long)a2 type:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)initWithLeftExpression:(id)a0 rightExpression:(id)a1 customSelector:(SEL)a2;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightKeyPath:(id)a2;
- (id)predicateFormat;
- (id)initWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightValue:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateOperator;
- (void)_acceptExpressions:(id)a0 flags:(unsigned long long)a1;
- (void)_acceptOperator:(id)a0 flags:(unsigned long long)a1;
- (void)setPredicateOperator:(id)a0;
- (id)keyPathExpressionForString:(id)a0;
- (id)generateMetadataDescription;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)predicateWithSubstitutionVariables:(id)a0;

@end
