@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {
    struct _expressionFlags { unsigned char _evaluationBlocked : 1; unsigned int _reservedExpressionFlags : 31; } _expressionFlags;
    unsigned int reserved;
    unsigned long long _expressionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long expressionType;
@property (readonly, retain) id constantValue;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *function;
@property (readonly, copy) NSString *variable;
@property (readonly, copy) NSExpression *operand;
@property (readonly, copy) NSArray *arguments;
@property (readonly, retain) id collection;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSExpression *leftExpression;
@property (readonly, copy) NSExpression *rightExpression;
@property (readonly, copy) NSExpression *trueExpression;
@property (readonly, copy) NSExpression *falseExpression;
@property (readonly, copy) id /* block */ expressionBlock;

+ (id)expressionForTernaryWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
+ (id)expressionForConditional:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
+ (id)expressionForSubquery:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
+ (id)expressionForFunction:(id)a0 selectorName:(id)a1 arguments:(id)a2;
+ (id)expressionForVariableNameAssignment:(id)a0 expression:(id)a1;
+ (id)expressionForFunction:(id)a0 arguments:(id)a1;
+ (id)_newKeyPathExpressionForString:(id)a0;
+ (id)expressionWithFormat:(id)a0 argumentArray:(id)a1;
+ (id)expressionWithFormat:(id)a0 arguments:(char *)a1;
+ (id)expressionForIntersectSet:(id)a0 with:(id)a1;
+ (id)expressionForBlock:(id /* block */)a0 arguments:(id)a1;
+ (id)expressionForVariable:(id)a0;
+ (id)expressionWithFormat:(id)a0;
+ (id)expressionForKeyPath:(id)a0;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForSymbolicString:(id)a0;
+ (id)expressionForConstantValue:(id)a0;
+ (id)expressionForUnionSet:(id)a0 with:(id)a1;
+ (id)expressionForMinusSet:(id)a0 with:(id)a1;
+ (id)expressionForAggregate:(id)a0;
+ (id)expressionForAnyKey;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsEvaluation;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)subexpression;
- (BOOL)_shouldUseParensWithDescription;
- (id)description;
- (id)initWithExpressionType:(unsigned long long)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (SEL)selector;
- (void)allowEvaluation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
