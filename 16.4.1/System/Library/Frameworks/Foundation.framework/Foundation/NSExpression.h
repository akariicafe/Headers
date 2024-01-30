@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {
    struct _expressionFlags { unsigned char _evaluationBlocked : 1; unsigned char _usesKVC : 1; unsigned char _validatedExpression : 1; unsigned char _validatedKeys : 1; unsigned int _reservedExpressionFlags : 28; } _expressionFlags;
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

+ (id)_newKeyPathExpressionForString:(id)a0;
+ (id)expressionWithFormat:(id)a0 arguments:(char *)a1;
+ (id)expressionForIntersectSet:(id)a0 with:(id)a1;
+ (id)expressionForAggregate:(id)a0;
+ (id)expressionForAnyKey;
+ (id)expressionForBlock:(id /* block */)a0 arguments:(id)a1;
+ (id)expressionForConditional:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
+ (id)expressionForConstantValue:(id)a0;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForFunction:(id)a0 arguments:(id)a1;
+ (id)expressionForFunction:(id)a0 selectorName:(id)a1 arguments:(id)a2;
+ (id)expressionForKeyPath:(id)a0;
+ (id)expressionForMinusSet:(id)a0 with:(id)a1;
+ (id)expressionForSubquery:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
+ (id)expressionForSymbolicString:(id)a0;
+ (id)expressionForTernaryWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
+ (id)expressionForUnionSet:(id)a0 with:(id)a1;
+ (id)expressionForVariable:(id)a0;
+ (id)expressionForVariableNameAssignment:(id)a0 expression:(id)a1;
+ (id)expressionWithFormat:(id)a0;
+ (id)expressionWithFormat:(id)a0 argumentArray:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_allowsEvaluation;
- (void)allowEvaluation;
- (id)description;
- (id)predicateFormat;
- (SEL)selector;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpressionType:(unsigned long long)a0;
- (id)subexpression;

@end
