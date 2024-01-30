@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (void)dealloc;
- (id)subexpression;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)assignmentVariable;
- (id)variable;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
