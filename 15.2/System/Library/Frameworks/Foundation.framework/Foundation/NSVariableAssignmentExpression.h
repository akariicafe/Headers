@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)subexpression;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)variable;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assignmentVariable;
- (unsigned long long)hash;
- (void)dealloc;

@end
